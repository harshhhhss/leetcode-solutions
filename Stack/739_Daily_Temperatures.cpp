// Problem: Daily Temperatures
// Difficulty: Medium
// Topic: Stack

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> arr(n,0);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                int previdx=st.top();
                st.pop();
                arr[previdx]=i-previdx;
            }
            st.push(i);
        }
        return arr;
    }
};
