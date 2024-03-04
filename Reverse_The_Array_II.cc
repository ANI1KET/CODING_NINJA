// void reverseArray(vector<int> &arr , int m){
//     int j = arr.size() - 1;
//     int i = m + 1;

//     while (i <= j)
//     {
//         swap(arr[i], arr[j]);
//         i++;
//         j--;
//     }
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

void reverseArray(vector<int> &arr, int m)
{
    int j = arr.size() - 1;
    int i = m + 1;

    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    vector<int> a = {7, 0, 9, 4, 5, 6};
    int m = 2;
    reverseArray(a, m);

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
