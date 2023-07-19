#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int answer = 0;
        int iter = 0;
        for (auto i : nums)
        {
            if (i)
            {
                iter++;
            }
            else
            {
                if (iter > answer)
                {
                    answer = iter;
                }
                iter = 0;
            }
        }
        return max(answer, iter);
    }
};

int main()
{
    vector<int> nums = {1, 0, 1, 1, 0, 1};
    Solution s;
    cout << s.findMaxConsecutiveOnes(nums);
    return 0;
}