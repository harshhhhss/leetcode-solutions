// Problem: Valid Perfect Square
// Difficulty: Easy
// Topic: Math

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        int i=1;
        while (num>0){
            num-=i;
            i+=2;
            if(num==0){
                return true;
            }
        }
        return false;
    }
};