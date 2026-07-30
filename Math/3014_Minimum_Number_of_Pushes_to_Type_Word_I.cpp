// Problem: Find Minimum Number of Pushes to Type Word I
// Difficulty: Easy
// Topic: Math

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumPushes(string word) {
        int n=word.length();
        int m=(n-1)/8+1;
        return m*(m-1)*4+(n-(m-1)*8)*m;
    }
};
