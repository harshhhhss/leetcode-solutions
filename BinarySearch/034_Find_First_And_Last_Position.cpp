// Problem: Find First and Last Position of Element in Sorted Array
// Difficulty: Medium
// Topic: Binary Search

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb=lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        if (lb==nums.size() || nums[lb]!=target){
            return {-1,-1};
        }
        int ub=upper_bound(nums.begin(),nums.end(),target) - nums.begin();
        return {lb,ub-1};
    }
};