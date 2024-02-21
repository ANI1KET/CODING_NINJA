// #include <bits/stdc++.h>
// void insertionSort(int n, vector<int> &arr){
//     for (int i = 1; i < n; i++)
//     {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

void insertionSort(int n, vector<int> &arr)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    // vector<int> a = {0, 7, 4, 2, 3, 10, 12, 9};
    vector<int> a = {7, 0, 9, 4};
    // vector<int> a = {7, 0};

    insertionSort(a.size(), a);

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
