// #include <bits/stdc++.h>
// vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix)
// {
//     int n = matrix.size();
//     int m = matrix[0].size();
//     vector<vector<int>> ans(n, vector<int>(m));

//     for (int i = 0; i < n; i++)
//     {
//         reverse(matrix[i].begin(), matrix[i].end());
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             ans[i][j] = matrix[j][i];
//         }
//     }

//     return ans;
// }
