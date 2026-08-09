// Problem: Minimum Size Subarray Sum
// Difficulty: Medium
// Topic: Sliding Window

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int sum=0;
        int l=INT_MAX;
        while(j<nums.size()){
            sum+=nums[j];
            while(sum>=target){
                sum-=nums[i];
                l=min(j-i+1,l);
                i++;
            }
            j++;
        }
        if(l==INT_MAX){
            return 0;
        }
        return l;
    }
};