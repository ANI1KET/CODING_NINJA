// #include <bits/stdc++.h>
// int minSubarraySum(int arr[], int n, int k)
// {
//     int ans = 0;
//     for (int i=0; i<k; i++)
//         ans += arr[i];

//     int sum = ans;
//     for (int i=k; i<n; i++)
//     {
//         sum += arr[i] - arr[i-k];
//         ans = min(ans, sum);
//     }

//     return ans;
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cctype>
#include <string>
#include <cmath>

using namespace std;

int minSubarraySum(int arr[], int n, int k)
{
    int ans = 0;
    for (int i = 0; i < k; i++)
        ans += arr[i];

    int sum = ans;
    cout << sum << endl;
    for (int i = k; i < n; i++)
    {
        sum += arr[i] - arr[i - k];
        cout << i << " " << sum << endl;
        ans = min(ans, sum);
    }

    return ans;
}

int main()
{
    int a[] = {10, 4, 2, 5, 6, 3, 8, 1};
    // int a[] = {1, -4, 2, 10, -2, 3, 1, 0, -20};

    cout << minSubarraySum(a, sizeof(a) / sizeof(a[0]), 3) << endl;

    return 0;
}
