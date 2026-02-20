#include<iostream>
using namespace std;

int main(){
    int arr[4]={3,2,3,4};
    int largest=arr[0];
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i =1;i<n;i++){
        if(arr[i]>largest) largest=arr[i];
    }
    cout<<largest;
    return 0;
}