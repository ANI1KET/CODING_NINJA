// #include <bits/stdc++.h>
// vector<int> copyAndReverse(vector<int> arr, int n) {
//     vector<int> COPY_ARR(n);

//     int j = n - 1;
//     int i = 0;

//     while (i <= j)
//     {
//         swap(arr[i], arr[j]);
//         COPY_ARR[i] = arr[i];
//         COPY_ARR[j] = arr[j];
//         i++;
//         j--;
//     }

//     return COPY_ARR;
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

vector<int> copyAndReverse(vector<int> arr, int n)
{
    vector<int> COPY_ARR(n);

    int j = n - 1;
    int i = 0;

    while (i <= j)
    {
        swap(arr[i], arr[j]);
        COPY_ARR[i] = arr[i];
        COPY_ARR[j] = arr[j];
        i++;
        j--;
    }

    return COPY_ARR;
}

int main()
{
    vector<int> a = {7, 0, 9, 4, 5, 6};

    vector<int> b = copyAndReverse(a, a.size());

    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}
