// Problem: Find the Highest Altitude
// Difficulty: Easy
// Topic: Arrays

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int curr=0;
        int res=0;
        for(int i=0;i<n;i++){
            curr+=gain[i];
            res=max(res,curr);
        }
        return res;
    }
};