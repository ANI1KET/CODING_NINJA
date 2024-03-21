// int searchInsert(vector<int>& arr, int m)
// {
//     int lo = 0;
//     int hi = arr.size() - 1;
//     int ans = -1;

//     while (lo <= hi)
//     {
//         int mid = lo + (hi - lo) / 2;

//         if (arr[mid] == m)
//         {
//             return mid;
//         }
//         if (arr[mid] > m)
//         {
//             hi = mid - 1;
//             ans = mid;
//         }
//         else
//         {
//             lo = mid + 1;
//         }
//     }

//     if (ans == -1)
//     {
//         ans = arr.size();
//     }

//     return ans;
// }

// int searchInsert(vector<int> &arr, int m)
// {
//     int start = 0;
//     int end = arr.size() - 1;

//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;

//         if (arr[mid] < m)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }

//     return start;
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cctype>
#include <string>
#include <cmath>

using namespace std;

int searchInsert(vector<int> &arr, int m)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] < m)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return start;
}

int main()
{
    // vector<int> a  = {1, 2, 4, 7};
    // vector<int> a = {};
    vector<int> a = {1, 2, 4, 7};

    cout << searchInsert(a, 9) << endl;

    return 0;
}
