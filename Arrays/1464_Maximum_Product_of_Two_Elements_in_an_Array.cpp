// Problem: Maximum Product of Two Elements in an Array
// Difficulty: Easy
// Topic: Arrays

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a=0;
        int b=0;
        for(int num: nums){
            int oa=a;
            a=max(a,num);
            b=max(b,min(oa,num));
        }
        return (a-1)*(b-1);
    }
};