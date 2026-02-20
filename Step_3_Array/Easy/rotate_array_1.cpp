#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {1, 3, 3, 4};

   
        int temp = arr[0];
        int n = sizeof(arr) / sizeof(arr[4]);
        for (int i = 1; i < n; i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[n - 1] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}