/*class Solution {
public:
    void func(int ind,string digits,string s,vector<string>&ans,string combos[]){
        if(ind==digits.size()){
            ans.push_back(s);
            return;
        }
        int digit=digits[ind]-'0';

        for(int i=0;i<combos[digit].size();i++){

            func(ind+1, digits, s+combos[digit][i], ans, combos);
        }
    }

    vector<string> letterCombinations(string digits) {
         // Mapping digits to corresponding characters
        string combos[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans; // Vector to store results
        string s = ""; // Temporary string to build combinations
        // Initiate recursive function
        func(0, digits, s, ans, combos);
        return ans; // Return the result
    }
};*/