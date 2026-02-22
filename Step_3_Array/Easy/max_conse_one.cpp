#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Input array
    vector<int> nums = {1, 1, 0, 1, 1, 1};

    // Variable to store current count of consecutive 1's
    int cnt = 0;
    // Variable to store maximum consecutive 1's
    int maxi = 0;

    // Traverse the array
    for (int i = 0; i < nums.size(); i++)
    {
        // If current element is 1, increment count
        if (nums[i] == 1)
        {
            cnt++;
        }
        else
        {
            // If element is 0, reset count
            cnt = 0;
        }

        // Update maximum if current count is greater
        maxi = max(maxi, cnt);
    }

    // Return maximum consecutive 1's
   cout<< maxi;

    return 0;
}
