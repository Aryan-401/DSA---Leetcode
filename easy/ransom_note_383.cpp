#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        // Add your function implementation here
        unordered_map<char, int> map;
        for (char c : magazine)
        {
            map[c]++;
        }
        for (char c : ransomNote)
        {
            if (map[c] == 0)
            {
                return false;
            }
            else
            {
                map[c]--;
            }
        }
        return true;
    }
};

int main()
{

    Solution s;
    cout << s.canConstruct("aa", "aab");
    return 0;
}