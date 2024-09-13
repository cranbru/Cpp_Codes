#include <iostream>
#include <vector>
using namespace std;

void printer(vector<int>vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}

vector <int> twosum(vector <int> v1,int target){
    vector <int> v2(2,-1);
    for(int i=0;i<v1.size();i++){
        for(int j=i;j<v1.size();j++){
            if(v1[i]+v1[j]==target){
                v2[0]=i;v2[1]=j;
                break;
            }
        }
    }
    return v2;
}

int main(){
    vector<int>v1={3,2,4};
    vector <int> answer = twosum(v1,6);
    printer(answer);
}