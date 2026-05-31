// Problem: Single Number
// Difficulty: Easy
// Topic: Math

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseBits(int n) {
        int ans=0;
        for(int i=0;i<32;i++){
            ans<<=1;
            ans|=(n&1);
            n>>=1;
        }
        return ans;
    }
};