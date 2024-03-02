#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr;
    int i = 0;
    int j;
    int n;

    cin >> n;

    for (i; i < n; i++)
    {
        cin >> j;
        arr.push_back(j);
    }

    i = 0;
    j = arr.size() - 1;

    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
