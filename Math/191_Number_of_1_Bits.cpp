// Problem: Number of 1 Bits
// Difficulty: Easy
// Topic: Math, Bit Manipulation

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        for(int i=0;i<32;i++){
            if (((n>>i) & 1) == 1){
                count++;
            }
        }
        return count;
    }
};