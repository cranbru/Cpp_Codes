#include <iostream>
#include <vector>
using namespace std;

void Printer(vector<int> v1){
    for(int i = 0 ;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> nums = {-1,1,0,-3,3};
    int n = nums.size();
    vector <int> answer(n,1);
    for(int i = 0;i<n;i++){
        for(int j = 0 ;j<n;j++){
            if(j!=i){
                answer[i]*=nums[j];
            }
        }
    }
    Printer(answer);
    return 0;
}