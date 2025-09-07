#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> ans;
void helper(string num, int target, int i, const string &path, long eval,
                long residual)
    {
        if (i == num.length())
        {
            if (eval == target)
            {
                ans.push_back(path);
                return;
            }
        }

        string curr;
        long add = 0;

        for (int j = i; j < num.length(); j++)
        {
            if (j > i && num[i] == '0')
            {
                return;
            }
            curr += num[j];
            add = add * 10 + num[j] - '0';

            if (i == 0)
            {
                helper(num, target, j + 1, path + curr, eval + add, add);
            }
            else
            {
                helper(num, target, j + 1, path + "*" + curr, eval - residual + residual * add, residual * add);
                helper(num, target, j + 1, path + "+" + curr, eval + add, add);
                helper(num, target, j + 1, path + "-" + curr, eval - add, -add);
            }
        }
    }

int main()
{
    string num ="123";
    int target=7;
        helper(num, target, 0, "", 0, 0);
        for (const auto &expr : ans) {
            cout << expr << endl;
        }
    return 0;
}