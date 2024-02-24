// #include <bits/stdc++.h>
// bool checkBits(unsigned int n) {
//     int ans = n & 1;
//     n = n >> 1;

//     while (n)
//     {
//         if (ans == (n & 1))
//         {
//             return 0;
//         }
//         ans = n & 1;
//         n = n >> 1;
//     }

//     return true;
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cctype>
#include <string>
#include <cmath>

using namespace std;

bool checkBits(unsigned int n)
{
    int ans = n & 1;
    n = n >> 1;

    while (n)
    {
        if (ans == (n & 1))
        {
            return 0;
        }
        ans = n & 1;
        n = n >> 1;
    }

    return true;
}

int main()
{
    unsigned int n = 42;

    cout << checkBits(n) << endl;

    return 0;
}
