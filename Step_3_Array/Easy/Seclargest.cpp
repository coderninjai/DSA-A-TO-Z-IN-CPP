#include <iostream>
using namespace std;

int secondlargest(int arr[], int n)
{
    int largest = arr[0];
    int seclargest = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            seclargest = largest;
            largest = arr[i];
        }
        else if (arr[i] != largest && arr[i] > seclargest)
        {
            seclargest = arr[i];
        }
    }
    cout<<seclargest;
}

int main()
{
    int arr[4] = {3, 2, 3, 4};
    int largest = arr[0];
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }
    int seclargest = -1;

    for (int j = 0; j < n; j++)
    {
        if (arr[j] > seclargest && arr[j] != largest)
            seclargest = arr[j];
    }
    cout << seclargest<<endl;

    int result = secondlargest(arr, n);
    return 0;
}