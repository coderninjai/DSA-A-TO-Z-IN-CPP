/*class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left=m-1;
        int right =0;
        while(left>=0 && right<m){
            if(nums1[left]>nums2[right]){
                swap(nums1[left],nums2[right]);
                left--;
                right++;
            }else{
                break;
            }
        }
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
    }
};



//this is for the leetcode problem attached to the TUF DSA SHEET
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left=m+n-1;
        int right =0;
        while(left>=m && right<n){
            if(nums1[left]==0){
                swap(nums1[left]a,nums2[right]);
                left--;
                right++;
            }else{
                break;
            }
        }
        sort(nums1.begin(),nums1.end());
        
    }
};



//Gap method 
class Solution {
public:
    void swapIfGreater(vector<int>& nums1, vector<int>& nums2, int ind1, int ind2) {
        if (nums1[ind1] > nums2[ind2]) 
            swap(nums1[ind1], nums2[ind2]);
    }

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len = m + n;
        int gap = (len / 2) + (len % 2);

        while (gap > 0) {
            int left = 0;
            int right = left + gap;

            while (right < len) {
                // Case 1: both in nums1
                if (left < m && right < m) {
                    swapIfGreater(nums1, nums1, left, right);
                }
                // Case 2: left in nums1, right in nums2
                else if (left < m && right >= m) {
                    swapIfGreater(nums1, nums2, left, right - m);
                }
                // Case 3: both in nums2
                else {
                    swapIfGreater(nums2, nums2, left - m, right - m);
                }
                left++;
                right++;
            }

            if (gap == 1) break;
            gap = (gap / 2) + (gap % 2);
        }

        // Copy nums2 back into nums1
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
    }
};
*/