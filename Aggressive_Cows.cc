// bool isPossible(vector<int> arr, int n, int m, int mid)
// {
//     int cowCount = 1;
//     int firstPos = arr[0];

//     for (int i = 1; i < n; i++)
//     {
//         if ((arr[i] - firstPos) >= mid)
//         {
//             cowCount++;
//             if (cowCount == m)
//                 return true;
//             firstPos = arr[i];
//         }
//     }

//     return false;
// }

// int aggressiveCows(vector<int> &stalls, int k)
// {
//     sort(stalls.begin(), stalls.end());
//     int n = stalls.size();

//     int max = 0;
//     int i = 0, j = n - 1;

//     while (i < j)
//     {
//         if ((stalls[i] > stalls[j]) && (stalls[i] > max))
//         {
//             max = stalls[i];
//         }
//         else if ((stalls[j] > stalls[i]) && (stalls[j] > max))
//         {
//             max = stalls[j];
//         }
//         else
//         {
//             max = max;
//         }
//         j--;
//         i++;
//     }

//     int min = 0;
//     int ans = -1;
//     while (min <= max)
//     {
//         int mid = min + ((max - min) / 2);

//         if (isPossible(stalls, n, k, mid))
//         {
//             ans = mid;
//             min = mid + 1;
//         }
//         else
//         {
//             max = mid - 1;
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
    int cowCount = 1;
    int firstPos = arr[0];

    for (int i = 1; i < n; i++)
    {
        if ((arr[i] - firstPos) >= mid)
        {
            cowCount++;
            if (cowCount == m)
                return true;
            firstPos = arr[i];
        }
    }

    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
    // if (stalls.size() < k)
    // {
    //     return -1;
    // }

    int max = 0;
    int i = 0, j = n - 1;

    while (i < j)
    {
        if ((stalls[i] > stalls[j]) && (stalls[i] > max))
        {
            max = stalls[i];
        }
        else if ((stalls[j] > stalls[i]) && (stalls[j] > max))
        {
            max = stalls[j];
        }
        else
        {
            max = max;
        }
        j--;
        i++;
    }
    cout << endl
         << "Max : " << max << endl;

    int min = 0;
    int ans = -1;
    while (min <= max)
    {
        int mid = min + ((max - min) / 2);

        cout << "Min : " << min << " Mid : " << mid << " Max : " << max << endl;

        if (isPossible(stalls, n, k, mid))
        {
            cout << "IF" << endl
                 << endl;
            ans = mid;
            min = mid + 1;
        }
        else
        {
            cout << "ELSE" << endl
                 << endl;
            max = mid - 1;
        }
    }
    return ans;
}

int main()
{
    // vector<int> a = {1, 2, 3};
    vector<int> a = {0, 3, 4, 7, 10, 9};
    // vector<int> a = {4, 2, 1, 3, 6};

    // int b = aggressiveCows(a, 2);
    int b = aggressiveCows(a, 4);
    // int b = aggressiveCows(a, 2);
    cout << b << endl;

    return 0;
}
