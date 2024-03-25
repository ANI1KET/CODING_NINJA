// #include <bits/stdc++.h>
// void sort012(int *arr, int n)
// {
//     int low = 0;
//     int mid = 0;
//     int high = n - 1;

//     while (mid <= high)
//     {
//         if (arr[mid] == 0)
//         {
//             swap(arr[low], arr[mid]);
//             low++;
//             mid++;
//         }
//         else if (arr[mid] == 1)
//         {
//             mid++;
//         }
//         else
//         {
//             swap(arr[mid], arr[high]);
//             high--;
//         }
//     }
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

void sort012(int *arr, int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    // int a[] = {0, 1, 2, 2, 1, 0};
    // int a[] = {0, 1, 2, 1, 2, 1, 2};
    int a[] = {2, 1, 2, 0, 1, 0};
    sort012(a, sizeof(a) / sizeof(a[0]));

    for (int i = 0; i < (sizeof(a) / sizeof(a[0])); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
