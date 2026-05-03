// Problem: Type of Triangle
// Difficulty: Easy
// Topic: Math

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a,b,c;
        a=nums[0];
        b=nums[1];
        c=nums[2];
        if (a+b<=c || a+c<=b || b+c<=a){
            return "none";
        }
        if (a==b && b==c){
            return "equilateral";
        }
        else if (a==b || b==c || c==a){
            return "isosceles";
        }
        else {
            return "scalene";
        }
    }
};