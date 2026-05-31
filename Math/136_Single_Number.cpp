// Problem: Single Number
// Difficulty: Easy
// Topic: Math

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int number=0;
        int n=nums.size();
        for (int i=0;i<n;i++){
            number^=nums[i];
            }
        return number;
    }
};