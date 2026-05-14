// Problem: Jump Game
// Difficulty: Medium
// Topic: Greedy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goal=nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]+i>=goal){
                goal=i;
            }
        }
        return (goal==0);
    }
};