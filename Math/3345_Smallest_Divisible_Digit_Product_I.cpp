// Problem: Smallest Divisible Digit Product
// Difficulty: Easy
// Topic: Math

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestNumber(int n, int t) {
        int x=n;
        while(true){
            int product=1;
            n=x;
            while(n){
                product*=n%10;
                n/=10;
            }
            if(product%t==0) break;
            x++;
        }
        return x;
    }
};