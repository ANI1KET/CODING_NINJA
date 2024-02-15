#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cctype>
#include <string>
#include <cmath>

using namespace std;

int findIndexOf(string a, string b)
{
    return b.find(a);
}

int main()
{
    cout << findIndexOf("bc", "abcddbc") << endl;

    return 0;
}
