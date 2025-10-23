class Solution {
public:

void computeLPS(string& temp, vector<int>& LPS) {
        int M = temp.length();
        int len = 0;

        LPS[0] = 0;
        int i = 1;

        while (i < M) {
            if (temp[i] == temp[len]) {
                len++;
                LPS[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = LPS[len - 1];
                } else {
                    LPS[i] = 0;
                    i++;
                }
            }
        }
    }
    string shortestPalindrome(string s) {
        string rev=s;
       reverse(begin(rev),end(rev));
        string temp=s+"-"+rev;
       vector<int>LPS(temp.length(),0);

       computeLPS(temp,LPS);
       int longestLPS =LPS[temp.length()-1];

       string culprit=rev.substr(0,s.length()-longestLPS);
       return culprit +s;
    }
};