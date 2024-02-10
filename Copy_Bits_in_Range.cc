#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cctype>
#include <cmath>

using namespace std;

int copyBitsInRange(int a, int b, int x, int y)
{
    int mask = (1 << (y - x + 1));
    mask--;
    mask = (mask << (x - 1));

    mask &= a;
    b |= mask;

    return b;
}

int main()
{
    // cout << copyBitsInRange(6, 19, 1, 3) << endl;
    // cout << copyBitsInRange(13, 7, 2, 4) << endl;
    // cout << copyBitsInRange(10, 18, 2, 3) << endl;
    // cout << copyBitsInRange(3, 2, 2, 4) << endl;
    // cout << copyBitsInRange(18, 8, 1, 4) << endl;
    // cout << copyBitsInRange(13, 7, 2, 4) << endl;
    // cout << copyBitsInRange(10, 18, 2, 3) << endl;
    // cout << copyBitsInRange(10, 17, 2, 4) << endl;
    // cout << copyBitsInRange(10, 20, 2, 3) << endl;
    // cout << copyBitsInRange(47, 21, 2, 3) << endl;
    // cout << copyBitsInRange(42, 39, 2, 4) << endl;

    // cout << copyBitsInRange(3779, 4442, 6, 7) << endl;
    // cout << copyBitsInRange(1992, 4149, 6, 7) << endl;
    // cout << copyBitsInRange(2668, 4086, 7, 8) << endl;
    // cout << copyBitsInRange(1813, 2241, 8, 8) << endl;
    // cout << copyBitsInRange(2292, 2377, 5, 5) << endl;

    return 0;
}
