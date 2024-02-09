// #include <vector>

// int duplicateNumber(int *arr, int size)
// {
//     vector<int> a(size, 0);

//     int i = 0, j = size - 1;

//     while (i < j)
//     {
//         a[arr[i]]++;
//         a[arr[j]]++;
//         i++;
//         j--;
//     }

//     if (i == j)
//         a[arr[i]]++;

//     i = a[--size], j = size, --size;
//     while (size)
//     {
//         if (i < a[size])
//         {
//             i = a[size];
//             j = size;
//         }
//         size--;
//     }

//     if (a[size] > 1)
//         return size;

//     return j;
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int findDuplicate(vector<int> &arr, int n)
{
    vector<int> a(n, 0);

    int i = 0, j = n - 1;

    while (i < j)
    {
        a[arr[i]]++;
        a[arr[j]]++;
        i++;
        j--;
    }

    if (i == j)
        a[arr[i]]++;

    i = a[--n], j = n, --n;
    while (n)
    {
        if (i < a[n])
        {
            i = a[n];
            j = n;
        }
        n--;
    }

    if (a[n] > 1)
        return n;

    return j;
}

int main()
{
    vector<int> a = {0, 0};

    int b = findDuplicate(a, a.size());
    cout << endl
         << b << endl;

    return 0;
}
