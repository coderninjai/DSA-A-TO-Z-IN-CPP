#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 4;

    vector<int> nums(a);
    for (int it : nums)
    {
        cin >> it;
    }

    int n = nums.size();
    if (n == 1)
        return 0;
    int j = -1;

    for (int k = 0; k < n; k++)
    {
        if (nums[k] == 0)
        {
            j = k;
            break;
        }
    }
    if (j == -1)
        return 0;
    for (int i = j + 1; i < n; i++)
    {
        if (nums[i] != 0)
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j++;
        }
    }
    return 0;
}

