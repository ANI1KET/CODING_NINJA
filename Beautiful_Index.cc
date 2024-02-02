// #include <bits/stdc++.h>
// int beautifulIndex(int N, vector<int> A)
// {
//     int leftSum = 0, rightSum = N - 1, n = 0;
//     while (leftSum <= rightSum)
//     {
//         if (leftSum == rightSum)
//         {
//             n += A[leftSum];
//         }
//         else
//         {
//             n += A[leftSum] + A[rightSum];
//         }
//         leftSum++;
//         rightSum--;
//     }
//     rightSum = n;
//     leftSum = 0;
//     for (int idx = 0; idx < A.size(); idx++)
//     {
//         rightSum -= A[idx];
//         if (leftSum == rightSum)
//             return idx + 1;
//         leftSum += A[idx];
//     }
//     return -1;
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int beautifulIndex(int N, vector<int> A)
{
    int leftSum = 0, rightSum = N - 1, n = 0;
    while (leftSum <= rightSum)
    {
        if (leftSum == rightSum)
        {
            n += A[leftSum];
        }
        else
        {
            n += A[leftSum] + A[rightSum];
        }
        leftSum++;
        rightSum--;
    }
    rightSum = n;
    leftSum = 0;
    for (int idx = 0; idx < A.size(); idx++)
    {
        rightSum -= A[idx];
        if (leftSum == rightSum)
            return idx + 1;
        leftSum += A[idx];
    }
    return -1;
}

int main()
{
    // vector<int> a = {2, 1, -1};
    // vector<int> a = {2, -1, 1};
    // vector<int> a = {-1, 1, 2};
    // vector<int> a = {1, -1, 2};
    // vector<int> a = {1, 2, 3};
    // vector<int> a = {1};
    // vector<int> a = {2, 2};
    // vector<int> a = {1, 7, 3, 6, 5, 6};
    // vector<int> a = {-1, -1, -1, -1, -1, 0};
    // vector<int> a = {1, 1, 1};
    // vector<int> a = {1, 2, 3};
    vector<int> a = {1, 2, 3, 3};

    int b = beautifulIndex(a.size(), a);
    cout << "Pivot Index : " << b << endl;
    cout << "Pivot Index : " << a[b] << endl;

    return 0;
}
