/*
class Solution {
    public:
    
    int countSum(vector <int>&nums,int sum ){
        int lastK=1;
        int n=nums.size();
        long long largestSum=0;
        for(int i=0;i<n;i++){
            if(largestSum+nums[i]>sum){
                lastK+=1;
                largestSum=nums[i];
            }else{
                largestSum+=nums[i];
            }
        }
        return lastK;
    }
    int splitArray(vector<int>& arr, int k) {
        int n=arr.size();
        if(k>n) return -1;    
        
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        
        while (low <= high)
        {
            int mid = (low + high) / 2;
            int students = countSum(arr, mid);
            if (students > k)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return low;
    }
};
*/