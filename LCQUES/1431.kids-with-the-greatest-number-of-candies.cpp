
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxcand = candies[0];
        vector <bool> answer(candies.size(),false);
        for(int i =0;i<candies.size();i++){
            if(candies[i]>maxcand){
                maxcand=candies[i];
            }
        }
        for(int i=0;answer.size();i++){
            if((candies[i]+extraCandies)>=maxcand){
                answer[i]=true;
            }
        }
        return answer;
    }
};



