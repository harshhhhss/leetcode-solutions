// Problem: Power of Four
// Difficulty: Easy
// Topic: Math

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int i=0;i<16;i++){
            if(pow(4,i)==n){
                return true;
            }
        }
        return false;
    }
};
