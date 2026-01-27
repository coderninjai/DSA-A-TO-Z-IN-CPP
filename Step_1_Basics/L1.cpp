
#include <bits/stdc++.h>
#include <math.h>
#include <string>

using namespace std;

  //functions 
    void printName(string name) {
        cout<<"heey " <<name;
    }

int main()
{
    // Input and output
    int i;
    cout << "Enter a number";
    cin >> i;
    cout << i << endl
         << "this is a";

    // Data types
    // intger
    int x = 10;
    long a = 23;
    long long b = 232323232;
    // float
    float c = 3.2;
    double d = 23.32322;
    // string
    string e = "string";

    string str;
    getline(cin, str);
    cout << str;
    // char
    char h= 'd';

    // if-else
    if (i < 100)
    {
        cout << "The number is less than 100";
    }
    else if (i > 100)
    {
        cout << "The number is greater than 100";
    }

    // && for multiple conditions

    // switch statements
    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "thursday";
        break;
    case 5:
        cout << "friday";
        break;
    case 6:
        cout << "saturaday";
        break;
    case 7:
        cout << "sunday";
        break;
    default:
        cout << "Invalid";
        break;
    }

    // Array 
     int arr[5];
     cin>>arr[0];

     arr[3]+=34;

    //  2D array 
    int arr1[4][5];

    // String 
    string s="striver";
    int len=s.size();
    s[len-1]='z';
    cout<<s[len-1];

    //for loops 
    for (int i = 0; i < 100; i++)
    {
        cout<<"Help me! ";
    }
    
    // while loop 
    while (i<=5)
    {
        cout<<i;
        i++;
    }

    //do-while
    i=2;
    do {
        cout<<"name";
        i++;
    }while(i<=1);


  
    printName("raj");

    // & to pass by reference (array always go with reference)


    return 0;
}