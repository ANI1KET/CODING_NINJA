// #include <bits/stdc++.h>
// int maximumWeightRow(int n, int m, vector<vector<int>> &mat) {
//     int maxSum = 0;
//     int ans = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (ans < maxSum)
//             ans = maxSum;
//         maxSum = 0;
//         for (int j = 0; j < m; j++)
//         {
//             maxSum += mat[i][j];
//         }
//     }
//     if (ans < maxSum)
//         ans = maxSum;

//     return ans;
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cctype>
#include <string>
#include <cmath>

using namespace std;

int maximumWeightRow(int n, int m, vector<vector<int>> &mat)
{
    int maxSum = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (ans < maxSum)
            ans = maxSum;
        maxSum = 0;
        for (int j = 0; j < m; j++)
        {
            maxSum += mat[i][j];
        }
    }
    if (ans < maxSum)
        ans = maxSum;

    return ans;
}

int main()
{
    // vector<vector<int>> a = {{1, 2, 3},
    //                          {4, 5, 6},
    //                          {7, 8, 9}};
    // vector<vector<int>> a = {{5, 1, 9, 11},
    //                          {2, 4, 8, 10},
    //                          {13, 3, 6, 7},
    //                          {15, 14, 12, 16}};
    // vector<vector<int>> a = {{1, 2, 3}};
    vector<vector<int>> a = {{2, 2}, {3, 4}, {2, 4}, {4, 5}};

    // cout << maximumWeightRow(4, 4, a) << endl;
    // cout << maximumWeightRow(1, 3, a) << endl;
    cout << maximumWeightRow(4, 2, a) << endl;

    return 0;
}
