#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int n =nums.size();
        int i=0;
        for (int j=1;j<n;j++){
            if(nums[j]!=nums[i]){
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
    }

int main(){
    int n=5;
    vector<int>nums(n);
    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }

    int result=removeDuplicates(nums);
   for (int i = 0; i < n; i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}

    