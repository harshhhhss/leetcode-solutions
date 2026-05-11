// Problem: Valid Parentheses
// Difficulty: Easy
// Topic: Stack

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char  i:s){
            if(i=='(' || i== '{' || i=='['){
                st.push(i);
            } else {
                if(st.empty() || (st.top()=='(' and i!=')') || (st.top()=='{' and i!='}') || (st.top()=='[' and i!=']')){
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};