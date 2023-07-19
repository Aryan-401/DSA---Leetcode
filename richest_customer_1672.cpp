#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        // Add your function implementation here
        int greatestSum = 0;

        for (auto i : accounts)
        {
            if (accumulate(i.begin(), i.end(), 0) > greatestSum)
            {
                greatestSum = accumulate(i.begin(), i.end(), 0);
            }
        }
        return greatestSum;
    }
};

int main()
{
    vector<vector<int>> args = {{1, 2, 3}, {3, 2, 1}};
    Solution s;
    cout << s.maximumWealth(args);
    return 0;
}