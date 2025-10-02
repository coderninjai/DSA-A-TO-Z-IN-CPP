#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void computeLPS(string& s2, vector<int>& lps) {
        int M = s2.length();
        int len = 0;

        lps[0] = 0;
        int i = 1;

        while (i < M) {
            if (s2[i] == s2[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }

    int strStr(string s1, string s2) {
        int N = s1.length();
        int M = s2.length();
        vector<int> result;

        vector<int> lps(M, 0);
        computeLPS(s2, lps);

        int i = 0;
        int j = 0;
        while (i < N) {
            if (s2[j] == s1[i]) {
                i++;
                j++;
            }

            if (j == M) {
                result.push_back(i - j); 
                return i-j;
                j = lps[j - 1];
            } else if (i < N && s2[j] != s1[i]) {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
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