/*
 * @lc app=leetcode id=1431 lang=cpp
 *
 * [1431] Kids With the Greatest Number of Candies
 */

// @lc code=start

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

// @lc code=end

