// #include <bits/stdc++.h>
// bool isPeriodic(string s)
// {
//     int n = s.length();
//     for (int i = 1; i < n; ++i)
//     {
//         bool match = true;
//         if (n % i == 0)
//         {
//             string period = s.substr(0, i);
//             for (int j = i; j < n; j += i)
//             {
//                 if (s.substr(j, i) != period)
//                 {
//                     match = false;
//                     break;
//                 }
//             }
//             if (match == true)
//             {
//                 return true;
//             }
//         }
//     }

//     return false;
// }
