// patterns
// Rules

/*
1. For the outer loop count the Rows ;
2. For the inner loop count the columns;
*/

#include <iostream>
using namespace std;

void pattern1 (int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void pattern2 (int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0;j<=i;j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}





int main()
{
    int n;
    cin>>n;
    
    pattern2(n);

    return 0;
}