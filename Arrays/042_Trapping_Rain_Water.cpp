// Problem: Trapping Rain Water
// Difficulty: Hard
// Topic: Arrays

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int totalwater=0;
        int lmax=0;
        int rmax=0;
        int start=0;
        int end=n-1;
        while(start<end){
            lmax=max(lmax,height[start]);
            rmax=max(rmax,height[end]);
            if(lmax<rmax){
                totalwater+=lmax-height[start];
                start++;
            } else{
                totalwater+=rmax-height[end];
                end--;
            }
        }
        return totalwater;
    }
};