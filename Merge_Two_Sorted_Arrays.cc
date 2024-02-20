// #include <bits/stdc++.h>

// vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
//     vector<int> a(m + n);
//     int i = 0, j = 0, k = 0;

//     while (i < m && j < n)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             a[k] = arr1[i];
//             i++;
//             k++;
//         }
//         else
//         {
//             a[k] = arr2[j];
//             j++;
//             k++;
//         }
//     }

//     while (i < m)
//     {
//         a[k] = arr1[i];
//         i++;
//         k++;
//     }

//     while (j < n)
//     {
//         a[k] = arr2[j];
//         j++;
//         k++;
//     }

//     return a;
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

vector<int> ninjaAndSortedArrays(vector<int> &arr1, vector<int> &arr2, int m, int n)
{
    // vector<int> a;
    vector<int> a(m + n);
    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            // cout << "1 " << endl;
            // a.push_back(arr1[i]);
            a[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            // cout << "2 " << endl;
            // a.push_back(arr2[j]);
            a[k] = arr2[j];
            j++;
            k++;
        }
    }

    while (i < m)
    {
        a[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n)
    {
        a[k] = arr2[j];
        j++;
        k++;
    }

    return a;
}

int main()
{
    // vector<int> a = {1, 2, 3};
    // vector<int> b = {4, 5};

    vector<int> a = {1, 4, 6, 10};
    vector<int> b = {2, 5};

    a = ninjaAndSortedArrays(a, b, a.size(), b.size());

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
