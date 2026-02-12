
#include <iostream>
using namespace std;

// Selections sorts
void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }
}

// Bubble sort

int bubble_sort(int arr[],int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        int didSwap = 0; // Use two nested loops to iterate over the array
        
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]); // Swap arr[j+1] with arr[i]
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }
}


// Insertion sort
void insertionSort(int arr[],int n) { 
        
        // For every element in the array 
        for (int i = 1; i < n; i++) {
            int key = arr[i]; // Current element as key 
            int j = i - 1; 
              
            // Shift elements that are greater than key by one position
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key; // Insert key at correct position
        }
        
       
    }
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selection_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}