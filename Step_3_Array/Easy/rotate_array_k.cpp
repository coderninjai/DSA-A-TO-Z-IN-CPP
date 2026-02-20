#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
int reverse(int arr[],int start,int end){

while(start<=end){
int temp=arr[start];
arr[start]=arr[end];
arr[end]=temp;
start++;
end--;
}

}
*/

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int x : nums)
    {
        cin >> x;
    }

    n = nums.size();

    k = k % n;
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());

    return 0;
}