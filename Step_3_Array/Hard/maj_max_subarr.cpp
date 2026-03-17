/*
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        int mini = nums[0];
        int res = nums[0];

        for (int i = 1; i < n; i++) {
            int curr = nums[i];

            if(curr<0)swap(maxi,mini);
            maxi=max(curr,maxi*curr);
            mini=min(curr,mini*curr);

            res=max(res,maxi);
        }
        return res;
    }
};
*/