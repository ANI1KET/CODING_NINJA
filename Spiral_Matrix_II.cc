// vector<int> spiralMatrix(vector<vector<int>>&MATRIX) {
//     vector<int> ans;
//     int row = MATRIX.size();
//     int col = MATRIX[0].size();

//     int count = 0;
//     int total = row * col;

//     int startingRow = 0;
//     int startingCol = 0;
//     int endingRow = row - 1;
//     int endingCol = col - 1;

//     while (count < total)
//     {
//         for (int index = startingCol; count < total && index <= endingCol; index++)
//         {
//             ans.push_back(MATRIX[startingRow][index]);
//             count++;
//         }
//         startingRow++;

//         for (int index = startingRow; count < total && index <= endingRow; index++)
//         {
//             ans.push_back(MATRIX[index][endingCol]);
//             count++;
//         }
//         endingCol--;

//         for (int index = endingCol; count < total && index >= startingCol; index--)
//         {
//             ans.push_back(MATRIX[endingRow][index]);
//             count++;
//         }
//         endingRow--;

//         for (int index = endingRow; count < total && index >= startingRow; index--)
//         {
//             ans.push_back(MATRIX[index][startingCol]);
//             count++;
//         }
//         startingCol++;
//     }
//     return ans;
// }
