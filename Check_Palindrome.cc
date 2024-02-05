// bool isPalindrome(string &s)
// {
// 	int l = 0;
//     int r = s.length() - 1;

//     while (l < r)
//     {
//         if (s[l] != s[r])
//         {
//             return false;
//         }
//         else
//         {
//             l++;
//             r--;
//         }
//     }

//     return true;
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cmath>

using namespace std;

bool checkPalindrome(string s)
{
    int l = 0;
    int r = s.length() - 1;

    while (l <= r)
    {
        if (s[l] != s[r])
        {
            return false;
        }
        else
        {
            l++;
            r--;
        }
    }

    return true;
}

int main()
{
    // string s = {"naman"};
    string s = {"NamaN"};
    cout << checkPalindrome(s) << endl;

    return 0;
}
