// void sortZeroesAndOne(int input[], int size)
// {
//     int l = 0, r = size - 1;
//     while (l < r)
//     {
//         while (input[l] == 0)
//         {
//             l++;
//         }
//         while (input[r] == 1)
//         {
//             r--;
//         }
//         if (l < r)
//         {
//             int temp = input[l];
//             input[l] = input[r];
//             input[r] = temp;
//             l++;
//             r--;
//         }
//     }
// }

// void sortZeroesAndOne(int input[], int size)
// {
//     int i = 0, j = size - 1;
//     while (i < j)
//     {
//         if (input[i] == 0)
//         {
//             i++;
//         }
//         else if (input[j] == 1)
//         {
//             j--;
//         }
//         else
//         {
//             int temp = input[i];
//             input[i] = input[j];
//             input[j] = temp;
//             i++;
//             j--;
//         }
//     }
// }

// void sortZeroesAndOne(int input[], int size)
// {
//     int i = 0, j = size - 1;
//     while (i < j)
//     {
//         if (input[i] == 1 && input[j] == 0)
//         {
//             int temp = input[i];
//             input[i] = input[j];
//             input[j] = temp;
//             i++;
//             j--;
//         }
//         else if (input[i] == 1)
//         {
//             j--;
//         }
//         else
//         {
//             if (input[j] == 1)
//                 j--;
//             i++;
//         }
//     }
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

// void sortZeroesAndOne(int input[], int size)
// {
//     int i = 0, j = size - 1;
//     while (i < j)
//     {
//         if (input[i] == 1 && input[j] == 0)
//         {
//             int temp = input[i];
//             input[i] = input[j];
//             input[j] = temp;
//             i++;
//             j--;
//         }
//         else if (input[i] == 1)
//         {
//             j--;
//         }
//         else
//         {
//             if (input[j] == 1)
//                 j--;
//             i++;
//         }
//     }
// }

// void sortZeroesAndOne(int input[], int size)
// {
//     int i = 0, j = size - 1;
//     while (i < j)
//     {
//         if (input[i] == 0)
//         {
//             i++;
//         }
//         else if (input[j] == 1)
//         {
//             j--;
//         }
//         else
//         {
//             int temp = input[i];
//             input[i] = input[j];
//             input[j] = temp;
//             i++;
//             j--;
//         }
//     }
// }

void sortZeroesAndOne(int input[], int size)
{
    int l = 0, r = size - 1;
    while (l < r)
    {
        while (input[l] == 0)
        {
            l++;
        }
        while (input[r] == 1)
        {
            r--;
        }
        if (l < r)
        {
            int temp = input[l];
            input[l] = input[r];
            input[r] = temp;
            l++;
            r--;
        }
    }
}

int main()
{
    // int a[] = {0, 1, 1, 0, 1, 0, 1};
    // int a[] = {0, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1};
    int a[] = {1, 1, 0, 0, 0, 0, 1, 0};
    sortZeroesAndOne(a, sizeof(a) / sizeof(a[0]));

    for (int i = 0; i < (sizeof(a) / sizeof(a[0])); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
