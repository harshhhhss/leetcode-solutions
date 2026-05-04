// Problem: Majority Element
// Difficulty: Easy
// Topic: Arrays

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority=nums[0];
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(count==0){
                count++;
                majority=nums[i];
            } else if(majority==nums[i]){
                count++;
            } else{
                count--;
            }
        }
        return majority;
    }
};