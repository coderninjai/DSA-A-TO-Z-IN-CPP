// class Solution {
// public:
//     int numSubarraysWithSum(vector<int>& nums, int goal) {
//         // Return difference between subarrays with sum at most goal and at most (goal - 1)
//         return atMost(nums, goal) - atMost(nums, goal - 1);
//     }

// private:
//     // Helper function to compute number of subarrays with sum at most k
//     int atMost(vector<int>& nums, int goal) {
//         // If k is negative, no such subarrays exist
//         if (goal < 0) return 0;

//         int l=0,r=0,cnt=0,sum=0;
//         while(r<nums.size()){
//             sum+=nums[r];
//             while(sum>goal){
//                 sum=sum-nums[l];
//                 l=l+1;
//             }
            
//             cnt+=(r-l+1);
//             r=r+1;
//         }
//         return cnt;
//     }
   
// };