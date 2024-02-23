// #include <bits/stdc++.h>
// int calculateScore(vector<string> &matchResult, int n)
// {
//     vector<int> trackRecord;

//     for (string &op : matchResult)
//     {
//         if (op == "+")
//         {
//             trackRecord.push_back(trackRecord.end()[-1] + trackRecord.end()[-2]);
//         }

//         else if (op == "C")
//         {
//             trackRecord.pop_back();
//         }

//         else if (op == "D")
//         {
//             trackRecord.push_back(trackRecord.back() * 2);
//         }

//         else
//         {
//             trackRecord.push_back(stoi(op));
//         }
//     }

//     int sumScore = 0;

//     for (int &score : trackRecord)
//     {
//         sumScore = sumScore + score;
//     }

//     return sumScore;
// }

// #include <bits/stdc++.h>
// int calculateScore(vector<string> &matchResult, int n)
// {
//     vector<int> trackRecord;
//     int i = 0;

//     for (string &op : matchResult)
//     {
//         if (op == "+")
//         {
//             trackRecord.push_back(trackRecord[i - 2] + trackRecord[i - 1]);
//             i++;
//         }

//         else if (op == "C")
//         {
//             trackRecord.pop_back();
//             i--;
//         }

//         else if (op == "D")
//         {
//             trackRecord.push_back(trackRecord.back() * 2);
//             i++;
//         }

//         else
//         {
//             trackRecord.push_back(stoi(op));
//             i++;
//         }
//     }
//     int sumScore = 0;

//     for (int &score : trackRecord)
//     {
//         sumScore = sumScore + score;
//     }

//     return sumScore;
// }

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cctype>
#include <string>
#include <cmath>

using namespace std;

// int calculateScore(vector<string> &matchResult, int n)
// {
//     vector<int> trackRecord;
//     int i = 0;

//     for (string &op : matchResult)
//     {
//         cout << op << " ";
//         if (op == "+")
//         {
//             trackRecord.push_back(trackRecord[i - 2] + trackRecord[i - 1]);
//             i++;
//         }

//         else if (op == "C")
//         {
//             trackRecord.pop_back();
//             i--;
//         }

//         else if (op == "D")
//         {
//             trackRecord.push_back(trackRecord.back() * 2);
//             i++;
//         }

//         else
//         {
//             trackRecord.push_back(stoi(op));
//             i++;
//         }
//     }

//     cout << endl;
//     for (int i = 0; i < trackRecord.size(); i++)
//     {
//         cout << trackRecord[i] << " ";
//     }

//     int sumScore = 0;

//     for (int &score : trackRecord)
//     {
//         sumScore = sumScore + score;
//     }

//     return sumScore;
// }

int calculateScore(vector<string> &matchResult, int n)
{
    vector<int> trackRecord;

    for (string &op : matchResult)
    {
        if (op == "+")
        {
            trackRecord.push_back(trackRecord.end()[-1] + trackRecord.end()[-2]);
        }

        else if (op == "C")
        {
            trackRecord.pop_back();
        }

        else if (op == "D")
        {
            trackRecord.push_back(trackRecord.back() * 2);
        }

        else
        {
            trackRecord.push_back(stoi(op));
        }
    }

    int sumScore = 0;

    for (int &score : trackRecord)
    {
        sumScore = sumScore + score;
    }

    return sumScore;
}

int main()
{
    // vector<string> a = {"15", "C", "10", "D"};
    // vector<string> a = {"7", "D", "2", "+", "C", "D"};
    // vector<string> a = {"2", "3", "+", "D", "C"};
    // vector<string> a = {"13", "D", "+", "12", "D", "15", "7"};
    // vector<string> a = {"15", "-7", "1", "11", "+", "+"};
    vector<string> a = {"9", "D", "D", "1", "C", "6", "C"};

    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout << a[i] << " ";
    // }

    int b = calculateScore(a, a.size());
    cout << endl
         << b << endl;

    return 0;
}
