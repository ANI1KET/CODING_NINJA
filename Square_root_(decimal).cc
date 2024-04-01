// #include <bits/stdc++.h>

// double precision(int a, int b, int preciseValue)
// {
//     double factor = 1;
//     double ans = b;
//     for (int i = 0; i < preciseValue; i++)
//     {
//         factor = factor / 10;
//         for (double j = ans; j * j < a; j += factor)
//         {
//             ans = j;
//         }
//     }
//     return ans;
// }

// double squareRoot(long long n, int d)
// {
// 	int l = 0;
//     int r = n;
//     int ans;
//     while (l <= r)
//     {
//         long long int m = l + ((r - l) / 2);
//         long long int square = m * m;
//         if (square == n)
//         {
//             return m;
//         }
//         else if (square > n)
//         {
//             r = m - 1;
//         }
//         else
//         {
//             ans = m;
//             l = m + 1;
//         }
//     }

//     return precision(n, ans, d);
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

double precision(int a, int b, int preciseValue)
{
    double factor = 1;
    double ans = b;
    for (int i = 0; i < preciseValue; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < a; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

double squareRoot(long long n, int d)
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

    return precision(n, ans, d);
}

int main()
{
    // int a = 100000;
    // int a = 37;
    // int a = 101;
    int a = 10;

    double b = squareRoot(a, 3);
    cout << b << endl;

    return 0;
}
