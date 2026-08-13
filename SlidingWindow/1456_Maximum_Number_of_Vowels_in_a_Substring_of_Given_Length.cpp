// Problem: Maximum Number of Vowels in a Substring of Given Length
// Difficulty: Medium
// Topic: Sliding Window

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isVowel(char c){
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
    int maxVowels(string s, int k) {
        int maxvowel=0;
        int left=0;
        int vowel=0;
        for(int right=0;right<s.length();right++){
            if(isVowel(s[right])) vowel++;
            if(right-left+1==k){
                maxvowel=max(maxvowel,vowel);
                if(isVowel(s[left])) vowel--;
                left++;
            }
        }
        return maxvowel;
    }
};