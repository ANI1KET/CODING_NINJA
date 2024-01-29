// long getMaximumProfit(long *values, int n)
// {
//     long ans = values[0];
//     long MaximumProfit = 0;

//     for (int i = 1; i < n; i++)
//     {
//         if (ans < values[i])
//         {
//             MaximumProfit += values[i] - ans;
//         }
//         ans = values[i];
//     }

//     return MaximumProfit;
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cctype>
#include <string>
#include <cmath>

using namespace std;

long getMaximumProfit(long *values, int n)
{
    long ans = values[0];
    long MaximumProfit = 0;

    for (int i = 1; i < n; i++)
    {
        if (ans < values[i])
        {
            MaximumProfit += values[i] - ans;
        }
        ans = values[i];
    }

    return MaximumProfit;
}

int main()
{
    long a[] = {7, 1, 5, 3, 6, 4};

    cout << getMaximumProfit(a, sizeof(a) / sizeof(a[0])) << endl;

    return 0;
}
