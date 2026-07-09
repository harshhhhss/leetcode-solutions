// Problem: Length of Last Word
// Difficulty: Easy
// Topic: Strings 

#include <bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=s.length()-1;
        int len=0;
        while(l>=0 && s[l]==' '){
            l--;
        }
        while(l>=0 && s[l]!=' '){
            len++;
            l--;
        }
        return len;
    }
};
