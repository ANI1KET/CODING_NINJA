// #include <bits/stdc++.h>
// vector<vector<int>> getFinalGrid(vector<vector<int>> &a, int n) {
//     for (int i = 0; i < n; i++)
//     {
//         reverse(a[i].begin(), a[i].end());
//         for (int j = 0; j < n; j++)
//         {
//             a[i][j] = (a[i][j] ^ 1);
//         }
//     }

//     return a;
// }

// #include <bits/stdc++.h>
// vector<vector<int>> getFinalGrid(vector<vector<int>> &a, int n) {
//     vector<vector<int>> ans;
//     int row = a.size();
//     int col = a[0].size();

//     for (int i = 0; i < row; i++)
//     {
//         reverse(a[i].begin(), a[i].end());
//     }

//     for (int i = 0; i < row; i++)
//     {
//         vector<int> temp;
//         for (int j = 0; j < col; j++)
//         {
//             temp.push_back((a[i][j] ^ 1));
//         }
//         ans.push_back(temp);
//     }
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

vector<vector<int>> getFinalGrid(vector<vector<int>> &a, int n)
{
    for (int i = 0; i < n; i++)
    {
        reverse(a[i].begin(), a[i].end());
        for (int j = 0; j < n; j++)
        {
            a[i][j] = (a[i][j] ^ 1);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return a;
}

// vector<vector<int>> getFinalGrid(vector<vector<int>> &a, int n)
// {
//     vector<vector<int>> ans;
//     int row = a.size();
//     int col = a[0].size();

//     for (int i = 0; i < row; i++)
//     {
//         reverse(a[i].begin(), a[i].end());
//     }

//     for (int i = 0; i < row; i++)
//     {
//         vector<int> temp;
//         for (int j = 0; j < col; j++)
//         {
//             temp.push_back((a[i][j] ^ 1));
//         }
//         ans.push_back(temp);
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return ans;
// }

int main()
{
    // vector<vector<int>> a = {{0, 1, 1}, {1, 1, 0}, {0, 0, 1}};
    vector<vector<int>> a = {
        {1, 1, 1, 1},
        {0, 0, 0, 0},
        {1, 1, 1, 1},
        {0, 0, 0, 0}};

    getFinalGrid(a, 4);

    return 0;
}
