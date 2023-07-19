#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfSteps(int num)
    {
        if (num & 1)
        {
            return 1 + numberOfSteps(num - 1);
        }
        else if (num == 0)
        {
            return 0;
        }
        else
        {
            return 1 + numberOfSteps(num / 2);
        }
    }
};

int main()
{

    Solution s;
    cout << s.numberOfSteps(14);
    return 0;
}