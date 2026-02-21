#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    set<int>st;
    for (int i = 0; i < 5; i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        st.insert(arr2[i]);
    }

    int uion[st.size()];
    int i = 0;
    for (auto it : st)
    {
        uion[i++] = it;
    }

    for (int j = 0; j < 5; j++)
    {
        cout << uion[j] << "  ";
    }

    return 0;
}