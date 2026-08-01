// Problem: Predict the Winner
// Difficulty: Medium
// Topic: Dynamic Programming

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        if(n%2==0) return true;
        vector<int> dp=nums;
        for(int i=1;i<n;i++){
            for(int j=0;j<n-i;j++){
                int k=i+j;
                dp[j]=max(nums[j]-dp[j+1],nums[k]-dp[j]);
            }
        }
        return dp[0]>=0;   
    }
};

