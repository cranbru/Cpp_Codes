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
    vector<int> nums = {1,2,3,4};
    int n = nums.size();
    vector <int> answer(n,1);

    //PRE ROUND
    int pre =1,post=1;
    for(int i = 0;i<n;i++){
        answer[i]*=pre;
        pre*=nums[i];
    }
    
    //POST ROUND
    for(int i=n-1;i>=0;i--){
        answer[i]*=post;
        post*=nums[i];
    }
    Printer(answer);

}