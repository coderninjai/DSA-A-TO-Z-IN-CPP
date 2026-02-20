#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {1, 3, 4, 5, 6, 75, 8};
    int sort = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            sort = 1;
        }
        else
        {
            sort=0;
            cout << "No";
            return 0;
        }
        
    }
    if (sort == 1)
        cout << "Yes";
    return 0;
}