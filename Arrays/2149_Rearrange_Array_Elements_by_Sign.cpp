// Problem: Check if Array Is Sorted and Rotated
// Difficulty: Easy
// Topic: Arrays

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int pos=0;
        int neg=1;
        for(int num:nums){
            if(num>0){
                ans[pos]=num;
                pos+=2;
            } else{
                ans[neg]=num;
                neg+=2;
            }
        }
        return ans;
    }
};