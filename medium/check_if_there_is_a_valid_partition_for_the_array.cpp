#include <bits/stdc++.h>
using namespace std;

// Leetcode 2369

class Solution
{
public:
void print1DVector(vector<int> &vector1D)
{
    for (auto i : vector1D)
        cout << i << " ";
    cout << endl;
}
    bool validPartition(vector<int>& nums) {
    const int n = nums.size();
    vector<bool> dp(n + 1);
    dp[0] = true;
    dp[2] = nums[0] == nums[1];

    for (int i = 3; i <= n; ++i)
      dp[i] = (dp[i - 2] && nums[i - 2] == nums[i - 1]) ||
              (dp[i - 3] &&
               ((nums[i - 3] == nums[i - 2] && nums[i - 2] == nums[i - 1]) ||
                (nums[i - 3] + 1 == nums[i - 2] &&
                 nums[i - 2] + 1 == nums[i - 1])));

    return dp[n];
  }
};

int main()
{
    vector<int> nums = {1, 1, 1, 2};
    Solution s;
    cout << s.validPartition(nums);
    return 0;
}