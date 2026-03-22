/*
class Solution {
public:
    int lowerBound(vector<int> arr, int n, int x) {
        int low = 0;      // Start of search range
        int high = n - 1; // End of search range
        int ans = n;      // Default to n (not found)

        // Binary search loop
        while (low <= high) {
            int mid = (low + high) / 2; // Middle index

            if (arr[mid] >= x) {
                ans = mid;      // Store possible answer
                high = mid - 1; // Try to find smaller index on left side
            } else {
                low = mid + 1; // Move right if current element is less than x
            }
        }
        return ans; // Return the index of the lower bound
    }

    int upperBound(vector<int>& arr, int n, int x) {
        int low = 0, high = n - 1;
        int ans = n; // Default answer if x is >= all elements

        while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[mid] > x) {
                ans = mid;      // Potential answer found
                high = mid - 1; // Try to find smaller valid index on the left
            } else {
                low = mid + 1; // Move right if mid is <= x
            }
        }
        return ans; // Index of the first element > x
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lb = lowerBound(nums, n, target);
        if (lb == n || nums[lb] != target){
            return {-1, -1};
        }
        return {lb, upperBound(nums, n, target)-1};
    }
};

*/