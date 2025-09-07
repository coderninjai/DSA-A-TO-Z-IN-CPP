#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;

bool solve(string s, unordered_set<string> &Dict, int len)
{
    for (int i = 1; i <= len; i++)
    {
        string pre = s.substr(0, i);
        if (Dict.find(pre) != Dict.end())
        {
            if (i == len)
            {
                return true;
            }
            if (solve(s.substr(i, len - i), Dict, len - i))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{

     unordered_set<string> Dict;
    
        string s = "leetcode";
        Dict.insert("leet");
        Dict.insert("code");

        
         if(solve(s, Dict, s.length())){
            cout<<"yes";
         }else{
            cout<<"No";
         }
    return 0;
}

// SINCE THE TIME LIMIT IS EXCEEDING IN THE LEETCODE THIS IS THE OPTIMAL SOLUTIOIN 

/*

#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
    public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string, bool> memo;  
        return solve(s, wordDict, memo);
    }
    
    bool solve(string s, vector<string>& wordDict, unordered_map<string, bool>& memo) {
        if (s.empty()) return true;
        
        if (memo.find(s) != memo.end()) {
            return memo[s];  
        }
        
        for (int i = 1; i <= s.length(); i++) {
            string pre = s.substr(0, i);
            
            // check if prefix exists in wordDict
            if (find(wordDict.begin(), wordDict.end(), pre) != wordDict.end()) {
                string rest = s.substr(i);
                
                if (solve(rest, wordDict, memo)) {
                    return memo[s] = true;
                }
            }
        }
        return memo[s] = false;
    }
};

*/