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
//             pageSum = arr[i];
//             if (studentCount > m || arr[i] > mid)
//             {
//                 return false;
//             }
//         }
//     }

//     return true;
// }

// int findLargestMinDistance(vector<int> &boards, int k)
// {
//     int n = boards.size();
//     if (boards.size() < k)
//     {
//         return -1;
//     }

//     int l = 0, r = boards.size() - 1, sum = 0;
//     while (l <= r)
//     {
//         if (l == r)
//         {
//             sum += boards[l];
//         }
//         else
//         {
//             sum += boards[l] + boards[r];
//         }
//         l++;
//         r--;
//     }

//     int ans = -1;
//     l = 0;
//     while (l <= sum)
//     {
//         int mid = l + ((sum - l) / 2);

//         if (isPossible(boards, n, k, mid))
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
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++)
    {
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
    }

    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int n = boards.size();
    if (boards.size() < k)
    {
        return -1;
    }

    int l = 0, r = boards.size() - 1, sum = 0;
    while (l <= r)
    {
        if (l == r)
        {
            sum += boards[l];
        }
        else
        {
            sum += boards[l] + boards[r];
        }
        l++;
        r--;
    }

    int ans = -1;
    l = 0;
    while (l <= sum)
    {
        int mid = l + ((sum - l) / 2);

        if (isPossible(boards, n, k, mid))
        {
            ans = mid;
            sum = mid - 1;
        }
        else
        {
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
    // vector<int> a = {5, 5, 5, 5};
    vector<int> a = {10, 20, 30, 40};

    // int b = findLargestMinDistance(a, 4, 2);
    // int b = findLargestMinDistance(a, 5, 4);
    // int b = findLargestMinDistance(a, 5, 6);
    // int b = findLargestMinDistance(a, 2);
    int b = findLargestMinDistance(a, 2);

    cout << "b : " << b << endl;
}
