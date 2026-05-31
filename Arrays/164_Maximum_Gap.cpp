// Problem: Maximum Gap
// Difficulty: Medium
// Topic: Arrays

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int mgap=0;
        for(int i=1;i<nums.size();i++){
            mgap=max(mgap,nums[i]-nums[i-1]);
        }
        return mgap;
    }
};
