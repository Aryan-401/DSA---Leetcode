#include <bits/stdc++.h>
using namespace std;

// Add any extra import statements you may need here

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (unsigned int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') // ({[]})
            {
                st.push(s[i]);
            }
            else
            {
                if (st.empty())
                {
                    return false;
                }
                else if (s[i] == ')' && st.top() != '(')
                {
                    return false;
                }
                else if (s[i] == '}' && st.top() != '{')
                {
                    return false;
                }
                else if (s[i] == ']' && st.top() != '[')
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
        }
        return st.empty();
    }
};

int main()
{
    string st = "({[]})";
    Solution s;
    cout << s.isValid(st);
    return 0;
}