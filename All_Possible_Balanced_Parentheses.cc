// #include <bits/stdc++.h>

// void generateParentheses(int n, int openCount, int closeCount, std::string current, std::vector<std::string> &result)
// {
//     if (current.length() == 2 * n)
//     {
//         result.push_back(current);
//         return;
//     }

//     if (openCount < n)
//     {
//         generateParentheses(n, openCount + 1, closeCount, current + '(', result);
//     }

//     if (closeCount < openCount)
//     {
//         generateParentheses(n, openCount, closeCount + 1, current + ')', result);
//     }
// }

// vector<string> balancedParentheses(int n)
// {
//     vector<string> result;
//     generateParentheses(n, 0, 0, "", result);
//     return result;
// }
