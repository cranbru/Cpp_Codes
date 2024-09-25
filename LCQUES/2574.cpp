#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void Printvec(vector <int> answer){
    for(int i =0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
}

int main() {
    vector<int> nums = {1};
    vector <int> answer(nums.size(),0);
    vector <int> left(nums.size(),0);
    vector <int> right(nums.size(),0);
    int lsum =0 ,rsum=0;
    for(int i =0;i<nums.size();i++){
        left[i]=lsum;
        right[nums.size()-i-1]=rsum;
        lsum+=nums[i];
        rsum+=nums[nums.size()-i-1];
        answer[i]+=lsum;
        answer[nums.size()-i-1]-=rsum;
    }

    for(int i=0;i<answer.size();i++){
        answer[i]=abs(answer[i]);
    }

    Printvec(answer);

    return 0;
}