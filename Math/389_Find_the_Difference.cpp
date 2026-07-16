// Problem: Find the Difference
// Difficulty: Easy
// Topic: Math

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