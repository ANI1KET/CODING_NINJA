// #include <iostream>
// #include <vector>

// using namespace std;

// string reverseStringWordWise(string input)
// {
//     vector<string> tmp;
//     input += " ";
//     string st = "";
//     for (int i = 0; i < input.length(); i++)
//     {
//         if (input[i] != ' ')
//         {
//             st += input[i];
//         }
//         else
//         {
//             if (st != "")
//             {
//                 tmp.push_back(st + " ");
//                 st = "";
//             }
//         }
//     }
//     st = "";
//     for (int i = tmp.size() - 1; i >= 0; i--)
//     {
//         st += tmp[i];
//     }

//     return st;
// }

// int main()
// {
//     string s;
//     getline(cin, s);
//     string ans = reverseStringWordWise(s);
//     cout << ans << endl;
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cctype>
#include <cmath>

using namespace std;

string reverseStringWordWise(string input)
{
    vector<string> tmp;
    input += " ";
    string st = "";
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] != ' ')
        {
            st += input[i];
        }
        else
        {
            if (st != "")
            {
                tmp.push_back(st + " ");
                st = "";
            }
        }
    }
    st = "";
    for (int i = tmp.size() - 1; i >= 0; i--)
    {
        st += tmp[i];
    }

    return st;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;

    return 0;
}
