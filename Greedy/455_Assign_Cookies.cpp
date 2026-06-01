// Problem: Assign Cookies
// Difficulty: Easy
// Topic: Greedy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int child=0;
        int cookie=0;
        while(child<g.size() && cookie<s.size()){
            if(s[cookie]>=g[child]){
                child++;
            }
            cookie++;
        }
        return child;
    }
};