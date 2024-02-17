// #include <bits/stdc++.h>

// vector < int > findDuplicates(vector < int > & arr, int n) {
//     vector<int> a(n, 0);
//     vector<int> b;

//     int i = 0, j = n - 1;

//     while (i < j)
//     {
//         a[arr[i]]++;
//         a[arr[j]]++;
//         i++;
//         j--;
//     }

//     if (i == j)
//         a[arr[i]]++;

//     n--;
//     while (n>=0)
//     {
//         if (a[n] > 1)
//         {
//             b.push_back(n);
//         }
//         n--;
//     }

//     return b;
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

vector<int> findDuplicates(vector<int> &arr, int n)
{
    vector<int> a(n, 0);
    vector<int> b;

    int i = 0, j = n - 1;

    while (i < j)
    {
        a[arr[i]]++;
        a[arr[j]]++;
        i++;
        j--;
    }

    if (i == j)
        a[arr[i]]++;

    n--;
    while (n >= 0)
    {
        if (a[n] > 1)
        {
            b.push_back(n);
        }
        n--;
    }

    return b;
}

int main()
{
    vector<int> a = {5, 0, 4, 2, 0, 2, 0};

    a = findDuplicates(a, a.size());
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
