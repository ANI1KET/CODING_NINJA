// vector<int> countPrimes(int n)
// {
//     vector<bool> prime(n, true);
//     for (int i = 2; i < n; i++)
//     {
//         if (prime[i] == true)
//         {
//             for (int j = 2 * i; j < n; j += i)
//             {
//                 prime[j] = false;
//             }
//         }
//     }

//     vector<int> ans;

//     for (int j = 2; j < n; j++)
//     {
//         if (prime[j] == true && (n % j) == 0)
//         {
//             ans.push_back(j);
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

vector<int> countPrimes(int n)
{
    vector<bool> prime(n, true);
    // prime[0] = prime[1] = false;

    for (int i = 2; i < n; i++)
    {
        if (prime[i] == true)
        {
            for (int j = 2 * i; j < n; j += i)
            {
                prime[j] = false;
            }
        }
    }

    vector<int> ans;

    for (int j = 2; j < n; j++)
    {
        if (prime[j] == true && (n % j) == 0)
        {
            ans.push_back(j);
        }
    }

    return ans;
}

int main()
{
    vector<int> a = countPrimes(44);

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}