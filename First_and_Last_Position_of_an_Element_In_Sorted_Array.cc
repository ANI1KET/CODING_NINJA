// int leftOccurence(vector<int> &nums, int target, int m)
// {
//     int i = 1;
//     while ((m - i) >= 0 && nums[m - i] == target)
//     {
//         i++;
//     }
//     return m - i + 1;
// }

// int rightOccurence(vector<int> &nums, int target, int m)
// {
//     int i = 1;
//     while ((m + i) < nums.size() && nums[m + i] == target)
//     {
//         i++;
//     }
//     return m + i - 1;
// }

// pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
// {
//     pair<int, int> PAIR;

//     int l = 0;
//     int r = arr.size() - 1;
//     int m = 0;

//     while (l <= r)
//     {
//         n++;
//         m = l + ((r - l) / 2);

//         if (arr[m] == k)
//         {
//             PAIR.first = (leftOccurence(arr, k, m));
//             PAIR.second = (rightOccurence(arr, k, m));
//             return PAIR;
//         }
//         else if (arr[m] < k)
//         {
//             l = m + 1;
//         }
//         else
//         {
//             r = m - 1;
//         }
//     }

//     PAIR.first = -1;
//     PAIR.second = -1;
//     return PAIR;
// }
