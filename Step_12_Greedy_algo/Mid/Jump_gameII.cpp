#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the minimum number of jumps using brute-force recursion
    int jump(vector<int>& nums) {
        return minJumps(nums, 0);
    }

private:
    // Recursive function to explore all possible jump paths
    int minJumps(vector<int>& nums, int position) {
        // If we are already at or beyond the last index, no more jumps needed
        if (position >= nums.size() - 1) return 0;

        // If we can't move from current position
        if (nums[position] == 0) return INT_MAX;

        int minStep = INT_MAX;

        // Try every possible jump from 1 to nums[position]
        for (int jump = 1; jump <= nums[position]; ++jump) {
            int subResult = minJumps(nums, position + jump);

            // If the result is not INT_MAX, update minimum step
            if (subResult != INT_MAX)
                minStep = min(minStep, 1 + subResult);
        }

        return minStep;
    }
};
// Driver Code
int main() {
    vector<int> nums = {2, 3, 1, 1, 4};

    Solution sol;
    cout << "Minimum number of jumps: " << sol.jump(nums) << endl;

    return 0;
}
