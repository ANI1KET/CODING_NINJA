// bool isPossible(vector<int> arr, int n, int m, int mid)
// {
//     int studentCount = 1;
//     int pageSum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (pageSum + arr[i] <= mid)
//         {
//             pageSum += arr[i];
//         }
//         else
//         {
//             studentCount++;
//             if (studentCount > m || arr[i] > mid)
//             {
//                 return false;
//             }
//             pageSum = arr[i];
//         }
//         if (studentCount > m)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int findPages(vector<int> &arr, int n, int m)
// {
//     // if (arr.size() < m)
//     // {
//     //     return -1;
//     // }

//     int l = 0, r = arr.size() - 1, sum = 0;
//     while (l <= r)
//     {
//         if (l == r)
//         {
//             sum += arr[l];
//         }
//         else
//         {
//             sum += arr[l] + arr[r];
//         }
//         l++;
//         r--;
//     }

//     int ans = -1;
//     l = 0;
//     while (l <= sum)
//     {
//         int mid = l + ((sum - l) / 2);
//         if (isPossible(arr, n, m, mid))
//         {
//             ans = mid;
//             sum = mid - 1;
//         }
//         else
//         {
//             l = mid + 1;
//         }
//     }
//     return ans;
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid)
{
    cout << "N : " << n << " m : " << m << " Mid : " << mid << endl;

    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] : " << arr[i];
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            pageSum = arr[i];
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
        }
        cout << "  pageSum : " << pageSum << "  studentCount : " << studentCount << endl;
    }

    return true;
}

int findPages(vector<int> &arr, int n, int m)
{
    if (arr.size() < m)
    {
        return -1;
    }

    int l = 0, r = arr.size() - 1, sum = 0;
    while (l <= r)
    {
        if (l == r)
        {
            sum += arr[l];
        }
        else
        {
            sum += arr[l] + arr[r];
        }
        l++;
        r--;
    }

    cout << "Sum : " << sum << endl
         << endl;

    int ans = -1;
    l = 0;
    while (l <= sum)
    {
        int mid = l + ((sum - l) / 2);

        cout << "l : " << l << " Mid : " << mid << " r : " << sum << endl;

        if (isPossible(arr, n, m, mid))
        {
            cout << "IF" << endl
                 << endl;
            ans = mid;
            sum = mid - 1;
        }
        else
        {
            cout << "ELSE" << endl
                 << endl;
            l = mid + 1;
        }
    }
    return ans;
}

int main()
{
    // vector<int> a = {12, 34, 67, 90};
    // vector<int> a = {25, 46, 28, 49, 24};
    // vector<int> a = {2, 8, 8, 4, 5};
    vector<int> a = {5, 5, 5, 5};
    // int b = findPages(a, 4, 2);
    // int b = findPages(a, 5, 4);
    // int b = findPages(a, 5, 6);
    int b = findPages(a, 4, 2);
    cout << "b : " << b << endl;
}