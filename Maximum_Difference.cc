// #include <bits/stdc++.h>
// string maximumDifference(int n, vector<int>& arr)
// {
//     n--;
//     int smallest = arr[n];
//     int largest = arr[n--];

//     while (n >= 0)
//     {
//         if (smallest > arr[n])
//         {
//             smallest = arr[n];
//         }
//         else if (largest < arr[n])
//         {
//             largest = arr[n];
//         }
//         n--;
//     }
//     if ((largest - smallest) % 2 == 0)
//     {
//         return "EVEN";
//     }
//     return "ODD";
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cctype>
#include <string>
#include <cmath>

using namespace std;

string maximumDifference(int n, vector<int> &arr)
{
    n--;
    int smallest = arr[n];
    int largest = arr[n--];

    while (n >= 0)
    {
        if (smallest > arr[n])
        {
            smallest = arr[n];
        }
        else if (largest < arr[n])
        {
            largest = arr[n];
        }
        n--;
    }
    if ((largest - smallest) % 2 == 0)
    {
        return "EVEN";
    }
    return "ODD";
}

int main()
{
    vector<int> a = {1, 11, 2, 4, 5};

    cout << maximumDifference(a.size(), a) << endl;

    return 0;
}
