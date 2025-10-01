#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {
        int open=0;
        int close=0;
        for(char ch:s){
            if(ch=='('){
                open++;
            }else{
                if(open>0){
                    open--;
                }else{
                    close++;
                }
            }
        }
        
        return ((open)+(close));
    }
};

int main(){
    string l="(((())))))))";
    Solution s;

int result=s.minAddToMakeValid(l); 
cout<<result;
}