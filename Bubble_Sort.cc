// #include <bits/stdc++.h>
// void bubbleSort(vector<int> &arr, int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         bool swapped = false;
//         for (int j = 0; j < n - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;

//                 swapped = true;
//             }
//         }
//         if (swapped == false)
//             break;
//     }
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

void selectionSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main()
{
    // vector<int> a = {0, 7, 4, 3, 10, 9};
    vector<int> a = {0, 7, 4, 2, 3, 10, 12, 9};

    selectionSort(a, a.size());

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
