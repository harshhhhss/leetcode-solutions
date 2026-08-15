// Problem: Longest Subsequence With Non-Zero XOR
// Difficulty: Medium
// Topic: Sliding Window

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        bool has_num = false;
        for (int x : nums) {
            s ^= x;
            if (x != 0) {
                has_num = true;
            }
        }
        if (!has_num) return 0;
        if (s != 0) return n;
        return n - 1;
    }
};