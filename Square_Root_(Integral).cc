#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 0;
    }

    else
    {
        int l = 0;
        int r = n;
        int ans;
        while (l <= r)
        {
            long long int m = l + ((r - l) / 2);
            long long int square = m * m;
            if (square == n)
            {
                ans = m;
                break;
            }
            else if (square > n)
            {
                r = m - 1;
            }
            else
            {
                ans = m;
                l = m + 1;
            }
        }
        cout << ans;
    }
}
