#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int strStr(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();
        if(n==0) return 0;
        for (int i = 0; i <= m - n; i++) {

            for (int j = 0; j < n; j++) {
                if (s1[i + j] != s2[j])
                    break;
                if (j== n - 1)
                    return i;
            }
        }
       return -1;
    }
};

int main(){
    string s1="leetcode";
    string s2="leet";
    Solution s;
    int res=s.strStr(s1,s2);
    cout<<res;
    return 0;
}