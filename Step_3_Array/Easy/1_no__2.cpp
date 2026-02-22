#include <bits/stdc++.h>
using namespace std;
int main()
{

    int nums[5] = {1, 1, 2, 2, 3};

    int n = 5;
    long xorr = 0;
    for (int i = 0; i < n; i++)
    {
        xorr = xorr ^ nums[i];
    }
    cout << xorr;
    return 0;
}