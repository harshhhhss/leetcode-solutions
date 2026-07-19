// Problem: Maximum Product Difference Between Two Pairs
// Difficulty: Easy
// Topic: Arrays

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int fbig=0;
        int sbig=0;
        int fsmall=INT_MAX;
        int ssmall=INT_MAX;
        for(int n:nums){
            if(n<fsmall){
                ssmall=fsmall;
                fsmall=n;
            } else if(n<ssmall){
                ssmall=n;
            }
            if(n>fbig){
                sbig=fbig;
                fbig=n;
            } else if(n>sbig){
                sbig=n;
            }
        }
        return (fbig*sbig)-(fsmall*ssmall);
    }
};