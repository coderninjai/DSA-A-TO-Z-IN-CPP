// Know basic maths
#include <bits/stdc++.h>

using namespace std;

// 1 count digits
int count1 = 0;
int count_digits(int n)
{

    /*
    Inside the int main
        int a;
        cin>>a;
        count_digits(a);
    */
    while (n > 0)
    {
        count1++;
        n = n / 10;
    }
    cout << "The value of the count is " << count1;
}

// 2 Reverse a number
int Reverse_num(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int b = n % 10;
        rev = rev * 10 + b;
        n = n / 10;
    }
    cout << rev;
}

// 2 checking pallindrome
int Check_pallindrome(int n)
{
    int rev = 0;
    int c = n;
    while (c > 0)
    {
        int b = c % 10;
        rev = rev * 10 + b;
        c = c / 10;
    }
    if (rev == n)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}

// 3 armstrong numbers
int armstrong(int n)
{
    int k = to_string(n).length();

    int dup = n;
    int sum = 0;
    while (dup > 0)
    {
        int ld = dup % 10;
        sum += pow(ld, k);
        dup = dup / 10;
    }
    if (sum == n)
    {
        cout << "yes";
    }
    else
        cout << "no";
}

// 4 print all divisor
int all_divisor(int n)
{
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i<<" ";
    //     }
    // }

    // optimised
    vector<int>div;
    for (int i = 1; i <sqrt(n) ; i++)
    {
      if(n%i==0){
        div.push_back(i);
          if((n/i)!=i){
            div.push_back(n/i);
          }
        }
    }
    sort(div.begin(),div.end());
    for (int i = 0; i < div.size(); i++) {
    cout << div[i] << " ";
}
    
}

// Check for prime 
int Check_prime(int n){
    int cnt=0;
    for (int  i = 1; i < sqrt(n); i++)
    {
        if(n%i==0){
            cnt++;
            if(n/i!=i){
                cnt++;
            }
        }
    }
    if(cnt==2){
        cout<<"yes";
    }else
        cout<<"no";
}


// Finding gcd
int Gcd(int n1,int n2){
    int gcd;
    for (int i=1;i<=min(n1,n2);i++){
        if(n1%i==0&&n2%i==0){
             gcd =i;
        }
    }
    cout<<gcd;
} 


// finding gcd using the euclidean method

int gcd(int n1,int n2)
{
    while (n1>0&&n2>0)
    {
        if(n1>n2) n1=n1%n2;
        else n2=n2%n1;
    }
    if (n2==0) cout<<n1;
    else cout<<n2;
    
}
int main()
{
    int a,b;
    cin >> a>>b;
    Gcd(a,b);
    return 0;
}