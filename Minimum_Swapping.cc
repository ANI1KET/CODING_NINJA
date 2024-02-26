// int minimumSwap(vector<int> &arr, int n)
// {
//     int totalSwaps1 = 0;
//     int totalSwaps2 = 0;
//     int currentZeros = 0;

//     for (int i = 0; i < n; ++i)
//     {
//         if (arr[i] == 0)
//         {
//             currentZeros++;
//         }
//         else
//         {
//             totalSwaps1 += currentZeros;
//         }
//     }

//     currentZeros = 0;

//     for (int i = 0; i < n; ++i)
//     {
//         if (arr[i] == 1)
//         {
//             currentZeros++;
//         }
//         else
//         {
//             totalSwaps2 += currentZeros;
//         }
//     }

//     return totalSwaps1 < totalSwaps2 ? totalSwaps1 : totalSwaps2;
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cctype>
#include <string>
#include <cmath>

using namespace std;

int minimumSwap(vector<int> &arr, int n)
{
    int totalSwaps1 = 0;
    int totalSwaps2 = 0;
    int currentZeros = 0;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == 0)
        {
            currentZeros++;
        }
        else
        {
            totalSwaps1 += currentZeros;
        }
    }

    currentZeros = 0;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == 1)
        {
            currentZeros++;
        }
        else
        {
            totalSwaps2 += currentZeros;
        }
    }

    return totalSwaps1 < totalSwaps2 ? totalSwaps1 : totalSwaps2;
}

// int minimumSwap(vector<int> &arr, int n)
// {
//     int count = 0, k = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if ((arr[i] & 1) == 0)
//         {
//             k++;
//         }
//     }

//     cout << k << endl;
//     while (k)
//     {
//         for (int i = 0; i < n - 1; i++)
//         {
//             if (arr[i] == 1 && arr[i + 1] == 0)
//             {
//                 count++;
//                 arr[i] = 0;
//                 arr[i + 1] = 1;
//             }
//         }
//         k--;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return count;
// }

// int minimumSwap(vector<int> &arr, int n)
// {
//     int count = 0, k = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] & 1 == 1)
//         {
//             k++;
//         }
//     }

//     cout << k << endl;
//     while (k)
//     {
//         for (int i = 0; i < n - 1; i++)
//         {
//             if (arr[i] == 1 && arr[i + 1] == 0)
//             {
//                 count++;
//                 arr[i] = 0;
//                 arr[i + 1] = 1;
//             }
//         }
//         k--;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return count;
// }

int main()
{
    // vector<int> a = {1, 0, 1, 1};
    // vector<int> a = {0, 1, 1};
    // vector<int> a = {1, 0, 0, 1, 1};
    // vector<int> a = {1, 0, 0, 1, 0, 0, 1};
    // vector<int> a = {1, 0, 0, 0};
    // vector<int> a = {0, 0, 0, 1, 0, 0};
    // vector<int> a = {1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 0};
    // vector<int> a = {0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0};
    vector<int> a = {1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0};
    // vector<int> a = {1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1};

    // minimumSwap(a, a.size());
    cout << minimumSwap(a, a.size()) << endl;

    return 0;
}
