// Problem: Best Time to Buy and Sell Stock II
// Difficulty: Medium
// Topic: Greedy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans=0;
        for(char ch:s){
            ans^=ch;
        }
        for(char ch:t){
            ans^=ch;
        }
        return ans;
    }
};