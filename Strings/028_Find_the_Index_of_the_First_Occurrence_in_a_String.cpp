// Problem: Find the Index of the First Occurrence in a String
// Difficulty: Easy
// Topic: Strings 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int h=haystack.length();
        int n=needle.length();
        for(int i=0;i<=h-n;i++){
            int j=0;
            while(j<n && haystack[i+j]==needle[j]){
                j++;
            }
            if(j==n){
                return i;
            }
        }
        return -1;
    }
};
