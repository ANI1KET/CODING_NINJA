#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cctype>
#include <cmath>

using namespace std;

string replaceSpaces(string &str)
{
    string temp = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}

int main()
{
    string a = "faf aef af eaf aef";

    cout << replaceSpaces(a) << endl;

    return 0;
}
