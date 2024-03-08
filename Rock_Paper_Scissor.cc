// #include <bits/stdc++.h>
// vector < int > rockPaperScissor(int k, string nezuko, string zenitsu) {
//     int n = nezuko.length();
//     int z = zenitsu.length();

//     int nezukoCount = 0;
//     int zenitsuCount = 0;

//     for (int i = 0; i < k; ++i) {
//         char moveNezuko = nezuko[i % n];
//         char moveZenitsu = zenitsu[i % z];

//         if (moveNezuko != moveZenitsu) {
//             if ((moveNezuko == 'R' && moveZenitsu == 'S') ||
//                 (moveNezuko == 'S' && moveZenitsu == 'P') ||
//                 (moveNezuko == 'P' && moveZenitsu == 'R')) {
//                 nezukoCount++;
//             } else {
//                 zenitsuCount++;
//             }
//         }
//     }

//     return {nezukoCount, zenitsuCount};
// }

// #include <bits/stdc++.h>
// vector<int> rockPaperScissor(int k, string nezuko, string zenitsu)
// {
//     int i = 0;
//     int j = 0;
//     int n = nezuko.length();
//     int z = zenitsu.length();
//     int nezukoCount = 0;
//     int zenitsuCount = 0;

//     std::vector<int> result;

//     while (i < k && j < k)
//     {
//         char moveNezuko = nezuko[i % n];
//         char moveZenitsu = zenitsu[j % z];

//         if (moveNezuko == moveZenitsu)
//         {
//         }
//         else if ((moveNezuko == 'R' && moveZenitsu == 'S') ||
//                  (moveNezuko == 'S' && moveZenitsu == 'P') ||
//                  (moveNezuko == 'P' && moveZenitsu == 'R'))
//         {
//             nezukoCount++;
//         }
//         else
//         {
//             zenitsuCount++;
//         }

//         i++;
//         j++;
//     }

//     result.push_back(nezukoCount);
//     result.push_back(zenitsuCount);

//     return result;
// }