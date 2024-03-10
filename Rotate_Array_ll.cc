// #include <bits/stdc++.h>
// void rotateArrayTwo(int n, char d, int r, vector < int > & num) {
//     if (d == 'f') {
//         r %= n;
//         reverse(num.begin(), num.begin() + n - r);
//         reverse(num.begin() + n - r, num.end());
//         reverse(num.begin(), num.end());
//     } else if (d == 'b') {
//         r %= n;
//         reverse(num.begin(), num.begin() + r);
//         reverse(num.begin() + r, num.end());
//         reverse(num.begin(), num.end());
//     }
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

// void rotateArrayTwo(int n, char d, int r, vector<int> &num)
// {
//     if (d == 'f')
//     {
//         for (int i = 1; i <= r; i++)
//         {
//             int temp = num[n - 1];
//             for (int j = n - 1; j >= 0; j--)
//             {
//                 num[j + 1] = num[j];
//             }
//             num[0] = temp;
//         }
//     }
//     else
//     {
//         for (int i = 1; i <= r; i++)
//         {
//             int temp = num[0];
//             for (int j = 0; j < n - 1; j++)
//             {
//                 num[j] = num[j + 1];
//             }
//             num[n - 1] = temp;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << num[i] << " ";
//     }
// }

// void rotateArrayTwo(int n, char d, int r, vector<int> &num)
// {
//     vector<int> a(n);
//     int i, j, k = 0;

//     if (d == 'f')
//     {
//         for (i = 0; i < (n - r); i++)
//         {
//             a[i] = num[i];
//         }

//         for (j = 0; j < r; j++)
//         {
//             num[j % n] = num[(n + j - r) % n];
//         }

//         while (j < n)
//         {
//             num[j] = a[k++];
//             j++;
//         }
//     }

//     else
//     {
//         for (i = 0; i < (n - r); i++)
//         {
//             a[i] = num[r + i];
//         }

//         i = 1;
//         for (j = n - 1; j >= (n - r); j--)
//         {
//             num[j % n] = num[(r - i) % n];
//             i++;
//         }

//         for (int i = 0; i <= j; i++)
//         {
//             num[i] = a[k++];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << num[i] << " ";
//     }
// }

// void rotateArrayTwo(int n, char d, int r, vector<int> &num)
// {
//     vector<int> a(n);

//     if (d == 'f')
//         for (int i = 0; i < n; i++)
//         {
//             a[(i + (n + r)) % n] = num[i];
//         }

//     else
//         for (int i = 0; i < n; i++)
//         {
//             a[(i + (n - r)) % n] = num[i];
//         }

//     num = a;

//     for (int i = 0; i < n; i++)
//     {
//         cout << num[i] << " ";
//     }
// }

// void rotateArrayTwo(int n, char d, int r, vector<int> &num)
// {
//     if (d == 'f')
//     {
//         r %= n;
//         rotate(num.begin(), num.begin() + r, num.end());
//     }
//     else if (d == 'b')
//     {
//         r %= n;
//         rotate(num.begin(), num.begin() + n - r, num.end());
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << num[i] << " ";
//     }
// }

void rotateArrayTwo(int n, char d, int r, vector<int> &num)
{
    vector<int> a = {2, 4, 7, 5, 6};
    if (d == 'f')
    {
        r %= n;
        reverse(num.begin(), num.begin() + n - r);
        reverse(num.begin() + n - r, num.end());
        reverse(num.begin(), num.end());
    }
    else if (d == 'b')
    {
        r %= n;
        reverse(num.begin(), num.begin() + r);
        reverse(num.begin() + r, num.end());
        reverse(num.begin(), num.end());
    }

    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }
}

int main()
{
    // vector<int> a = {1, 2, 3, 4, 5, 6, 7};
    // vector<int> a = {1, 2, 3, 4, 5};
    // vector<int> a = {2, 4, 7};
    // vector<int> a = {3, 3, 10, 10, 4, 6, 2, 10, 6, 7, 8, 9, 2};
    // vector<int> a = {3, 10, 3, 2, 3, 3, 10, 10};
    // vector<int> a = {3, 3, 10, 10, 4, 6, 2, 10, 6};
    vector<int> a = {2, 4, 7, 5, 6};

    int k = 2;

    rotateArrayTwo(a.size(), 'f', k, a);
    // rotateArrayTwo(a.size(), 'b', k, a);

    return 0;
}
