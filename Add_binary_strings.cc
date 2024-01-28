// string addBinaryString(string &a, string &b, int n, int m)
// {
//     string ans;
//     int sum = 0;
//     int carry = 0;
//     int i = 0;

//     while (i < n || i < m || carry != 0)
//     {
//         int x = 0;
//         if (i < n && a.at(n - 1 - i) == '1')
//             x = 1;
//         int y = 0;
//         if (i < m && b.at(m - 1 - i) == '1')
//             y = 1;

//         ans = to_string((x + y + carry) % 2) + ans;
//         carry = (x + y + carry) / 2;
//         i++;
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

string addBinaryString(string &a, string &b, int n, int m)
{
    string ans;
    int sum = 0;
    int carry = 0;
    int i = 0;

    while (i < n || i < m || carry != 0)
    {
        int x = 0;
        if (i < n && a.at(n - 1 - i) == '1')
            x = 1;
        int y = 0;
        if (i < m && b.at(m - 1 - i) == '1')
            y = 1;

        ans = to_string((x + y + carry) % 2) + ans;
        carry = (x + y + carry) / 2;
        i++;
    }

    return ans;
}

int main()
{
    string a = "101101";
    string b = "1101";
    cout << addBinaryString(a, b, a.length(), b.length());

    return 0;
}
