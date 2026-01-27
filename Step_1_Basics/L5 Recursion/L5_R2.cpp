// basic recursion problems

#include<iostream>
using namespace std;

// print n times a name

void print_name(int i,int n){
    if(i>n) return;
    cout<<"raj"<<endl;
    print_name(i+1,n);
}


// print linearly from 1 to n
void print_num(int i,int n){
    if(i>n) return;//reverse i<1;
    cout<<i<<endl;
    print_num(i+1,n); //for reverse call for i-1,n
}

// backtracking 
void print_num1(int i,int n){
    if(i<1) return;
    print_num1(i-1,n); 
    cout<<i<<endl;
}

// backtracking  from n to 1
void print_num2(int i,int n){
    if(i>n) return;
    print_num2(i+1,n); 
    cout<<i<<endl;
}
int main(){
    print_num2(0,5);
    return 0;
}