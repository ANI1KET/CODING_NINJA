// #include <bits/stdc++.h>

// int findDuplicate(vector<int> &arr, int n){
//     vector<int> a(n, 0);

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
//     while (n)
//     {
//         if (a[n] > 1)
//         {
//             return n;
//         }
//         n--;
//     }
// }

// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <cmath>

// using namespace std;

// int findDuplicate(vector<int> &arr, int n)
// {
//     // if (((n * arr[0]) / arr[1]) == n)
//     // {
//     //     return arr[0];
//     // }

//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         ans = ans ^ arr[i];
//     }

//     for (int i = 1; i < n; i++)
//     {
//         ans = ans ^ i;
//     }

//     return ans;
// }

// int main()
// {
//     // vector<int> a = {1, 1, 1};
//     // vector<int> a = {2, 2, 2, 2, 2};
//     // vector<int> a = {1, 3, 4, 2, 2};
//     // vector<int> a = {3, 1, 3, 4, 2};
//     // vector<int> a = {1, 2, 3, 4, 4};
//     vector<int> a = {4, 5, 8, 4, 6, 1, 2, 3, 7, 4};

//     // int c = a.size();
//     // if (((c * a[0]) / a[1]) != c)
//     // {
//     int b = findDuplicate(a, a.size());
//     cout << endl
//          << b << endl;
//     // }

//     // cout << (c * a[0]) / a[1] << endl;
//     // cout << a[0] << endl;

//     return 0;
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int findDuplicate(vector<int> &arr, int n)
{
    vector<int> a(n, 0);

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

    i = a[--n], j = n, --n;
    while (n)
    {
        if (i < a[n])
        {
            i = a[n];
            j = n;
        }
        n--;
    }

    if (a[n] > 1)
        return n;

    return j;
}

int main()
{
    // vector<int> a = {1, 1, 1};
    // vector<int> a = {2, 2, 2, 2, 2};
    // vector<int> a = {1, 3, 4, 2, 2};
    // vector<int> a = {3, 1, 3, 4, 2};
    // vector<int> a = {1, 2, 3, 4, 4};
    // vector<int> a = {4, 5, 8, 4, 6, 1, 2, 3, 7, 4};
    vector<int> a = {0, 0};

    int b = findDuplicate(a, a.size());
    cout << endl
         << b << endl;

    return 0;
}
