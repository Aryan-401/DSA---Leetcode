#include <bits/stdc++.h>
using namespace std;

//

class Solution
{
public:
    bool isPalindrome(int x)
    {
        // Add your function implementation here
        bool answer;
        string s = to_string(x);
        for (unsigned int i = 0; i < s.length(); i++)
        {
            if (s[i] != s[s.length() - i - 1])
            {
                answer = false;
                break;
            }
            else
                answer = true;
        }
        return answer;
    }
};

int main()
{
    Solution s;
    cout << s.isPalindrome(1441);
    return 0;
}