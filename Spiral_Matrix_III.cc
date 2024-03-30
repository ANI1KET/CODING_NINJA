// #include <bits/stdc++.h>
// vector<long> spiralPathMatrix(vector<vector<long>>& matrix, long n, long m) {
//     vector<long> ans;

//     long count = 0;
//     long total = n * m;

//     long startingRow = 0;
//     long startingCol = 0;
//     long endingRow = n - 1;
//     long endingCol = m - 1;

//     while (count < total) {
//         for (long index = startingCol; count < total && index <= endingCol; index++) {
//             ans.push_back(matrix[startingRow][index]);
//             count++;
//         }
//         startingRow++;

//         for (long index = startingRow; count < total && index <= endingRow; index++) {
//             ans.push_back(matrix[index][endingCol]);
//             count++;
//         }
//         endingCol--;

//         for (long index = endingCol; count < total && index >= startingCol; index--) {
//             ans.push_back(matrix[endingRow][index]);
//             count++;
//         }
//         endingRow--;

//         for (long index = endingRow; count < total && index >= startingRow; index--) {
//             ans.push_back(matrix[index][startingCol]);
//             count++;
//         }
//         startingCol++;
//     }

//     return ans;
// }

// #include <bits/stdc++.h>
// vector<long> spiralPathMatrix(vector<vector<long>> &matrix, long n, long m)
// {
//     vector<long> ans;

//     long count = 0;
//     long total = n * m;

//     long startingRow = 0;
//     long startingCol = 0;
//     long endingRow = n - 1;
//     long endingCol = m - 1;

//     while (count < total)
//     {
//         for (long index = startingCol; count < total && index <= endingCol; index++)
//         {
//             ans.push_back(matrix.at(startingRow).at(index));
//             count++;
//         }
//         startingRow++;

//         for (long index = startingRow; count < total && index <= endingRow; index++)
//         {
//             ans.push_back(matrix.at(index).at(endingCol));
//             count++;
//         }
//         endingCol--;

//         for (long index = endingCol; count < total && index >= startingCol; index--)
//         {
//             ans.push_back(matrix.at(endingRow).at(index));
//             count++;
//         }
//         endingRow--;

//         for (long index = endingRow; count < total && index >= startingRow; index--)
//         {
//             ans.push_back(matrix.at(index).at(startingCol));
//             count++;
//         }
//         startingCol++;
//     }
//     return ans;
// }
