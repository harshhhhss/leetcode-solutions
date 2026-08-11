// Problem: Smallest Missing Integer Greater Than Sequential Prefix Sum
// Difficulty: Easy
// Topic: Arrays

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0];
        int i=1;
        while(i<nums.size() && nums[i]==nums[i-1]+1){
            sum+=nums[i];
            i++;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==sum){
                sum++;
            }
        }
        return sum;
    }
};