// #include <bits/stdc++.h>
// void moveZerosToLeft(int *arr, int n)
// {
//     int l = n - 1, r = n - 1;

//     while (l >= 0)
//     {
//         if (arr[l] != 0)
//         {
//             swap(arr[r], arr[l]);
//             r--;
//         }
//         l--;
//     }
// }

// #include <bits/stdc++.h>
// void moveZerosToLeft(int *arr, int n)
// {
//     int l = n - 1, r = n - 1;

//     while (l >= 0)
//     {
//         if (arr[l] != 0)
//         {
//             swap(arr[r], arr[l]);
//             r--;
//             l--;
//         }
//         else
//         {
//             l--;
//         }
//     }
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

// void moveZerosToLeft(int *arr, int n)
// {
//     int l = n - 1, r = n - 1;

//     while (l >= 0)
//     {
//         if (arr[l] != 0)
//         {
//             swap(arr[r], arr[l]);
//             r--;
//             l--;
//         }
//         else
//         {
//             l--;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

void moveZerosToLeft(int *arr, int n)
{
    int l = n - 1, r = n - 1;

    while (l >= 0)
    {
        if (arr[l] != 0)
        {
            swap(arr[r], arr[l]);
            r--;
        }
        l--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // int a[] = {1, 1, 0, 2, 0};
    // int a[] = {1, 2, 0, 0, 1, 2};
    int a[] = {1, 2, 0, 0, 2, 1};

    moveZerosToLeft(a, sizeof(a) / sizeof(a[0]));

    return 0;
}
