// Problem: Find Pivot Index
// Difficulty: Easy
// Topic: Arrays

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            total+=nums[i];
        }
        int left=0;
        for(int i=0;i<n;i++){
            int right=total-left-nums[i];
            if(right==left){
                return i;
            }
            left+=nums[i];
        } 
        return -1;
    }
};