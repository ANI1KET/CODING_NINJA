// #include <bits/stdc++.h>
// int squareRoot(int a)
// {
// 	int l = 0;
//     int r = a;
//     int ans;
//     while (l <= r)
//     {
//         long long int m = l + ((r - l) / 2);
//         long long int square = m * m;
//         if (square == a)
//         {
//             return m;
//         }
//         else if (square > a)
//         {
//             r = m - 1;
//         }
//         else
//         {
//             ans = m;
//             l = m + 1;
//         }
//     }
//     return ans;
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int floorSqrt(int n)
{
    int l = 0;
    int r = n;
    int ans;
    while (l <= r)
    {
        long long int m = l + ((r - l) / 2);
        long long int square = m * m;
        if (square == n)
        {
            return m;
        }
        else if (square > n)
        {
            r = m - 1;
        }
        else
        {
            ans = m;
            l = m + 1;
        }
    }
    return ans;
}

int main()
{
    // int a = 100000;
    int a = 63;
    // int a = 101;

    int b = floorSqrt(a);
    cout << b << endl;

    return 0;
}
