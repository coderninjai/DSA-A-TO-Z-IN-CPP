#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    vector<int> ans;
    int i = 0;
    int j = 0;
    while (i < 5 && j < 5)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            j++;
        }
        else
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    return 0;
}
