#include<iostream>
using namespace std;

// The summation of first n numbers

void sum_n (int i,int n){
    if(i<1){ cout<<n;return;}
    sum_n(i-1,n+i);
}

int main(){
    int n=3;
    sum_n(0,n);
    return 0;
}