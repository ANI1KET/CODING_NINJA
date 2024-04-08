// #include <bits/stdc++.h>
// int sumOfMaxMin(int arr[], int n){
// 	n--;
//     int smallest = arr[n];
//     int largest = arr[n--];

//     while (n >= 0)
//     {
//         if (smallest > arr[n])
//         {
//             smallest = arr[n];
//         }
//         else if (largest < arr[n])
//         {
//             largest = arr[n];
//         }
//         n--;
//     }
//     return largest + smallest;
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cctype>
#include <string>
#include <cmath>

using namespace std;

int sumOfMaxMin(int arr[], int n)
{
    n--;
    int smallest = arr[n];
    int largest = arr[n--];

    while (n >= 0)
    {
        if (smallest > arr[n])
        {
            smallest = arr[n];
        }
        else if (largest < arr[n])
        {
            largest = arr[n];
        }
        n--;
    }
    return largest + smallest;
}

int main()
{
    int a[] = {1, 2, 4, 5, 6, 6, 6};
    // int a[] = {-1, -4, 5, 8, 9, 3};

    cout << sumOfMaxMin(a, sizeof(a) / sizeof(a[0])) << endl;

    return 0;
}
