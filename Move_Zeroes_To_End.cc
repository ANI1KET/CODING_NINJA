// void pushZerosAtEnd(vector<int> &arr)
// {
//     int r = 0,n=arr.size();

//     for(int l=0;l<n;l++)
//     {
//         if (arr[l] != 0)
//         {
//             swap(arr[r], arr[l]);
//             r++;
//         }
//     }
// }

// void pushZerosAtEnd(vector<int> &arr)
// {
//     int l = 0,r = 0;

//     while (l < arr.size())
//     {
//         if (arr[l] != 0)
//         {
//             swap(arr[r], arr[l]);
//             r++;
//         }
//         l++;
//     }
// }

// void pushZerosAtEnd(vector<int> &arr)
// {
//     int l = 0, r = 0;

//     while (r < arr.size())
//     {
//         if (arr[r] != 0)
//         {
//             swap(arr[r], arr[l]);
//             r++;
//             l++;
//         }
//         else
//             r++;
//     }
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

// void pushZerosAtEnd(vector<int> &arr)
// {
//     int l = 0, r = 0;

//     while (r < arr.size())
//     {
//         if (arr[r] != 0)
//         {
//             swap(arr[r], arr[l]);
//             r++;
//             l++;
//         }
//         else
//             r++;
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

void pushZerosAtEnd(vector<int> &arr)
{
    int l = 0, r = 0;

    while (l < arr.size())
    {
        if (arr[l] != 0)
        {
            swap(arr[r], arr[l]);
            r++;
        }
        l++;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // vector<int> a = {1, 1, 0, 2, 0};
    // vector<int> a = {1, 2, 0, 0, 1, 2};
    vector<int> a = {1, 2, 0, 0, 2, 1};

    pushZerosAtEnd(a);

    return 0;
}
