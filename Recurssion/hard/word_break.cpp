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