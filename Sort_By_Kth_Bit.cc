// vector<int> sortArrayByKBit(int n, int k, vector<int> &arr) {
//     vector<int> ans;
//     int j = 0;

//     for (int i = 0; i < n; i++)
//     {
//         int check = arr[i];
//         check = check >> (k - 1);
//         if ((check & 1) == 0)
//         {
//             ans.insert(ans.begin() + j, arr[i]);
//             j++;
//         }
//         else
//         {
//             ans.insert(ans.end(), arr[i]);
//         }
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

vector<int> sortArrayByKBit(int n, int k, vector<int> &arr)
{
    vector<int> ans;
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        int check = arr[i];
        check = check >> (k - 1);
        if ((check & 1) == 0)
        {
            ans.insert(ans.begin() + j, arr[i]);
            j++;
        }
        else
        {
            ans.insert(ans.end(), arr[i]);
        }
    }

    return ans;
}

int main()
{
    vector<int> a = {3, 6, 2, 1, 4};

    a = sortArrayByKBit(a.size(), 1, a);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}