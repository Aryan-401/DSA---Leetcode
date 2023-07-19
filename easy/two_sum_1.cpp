#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // Add your function implementation here
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            int compliment = target - nums[i];
            if (map.find(compliment) != map.end())
            {
                return {map[compliment], i};
            }
            map[nums[i]] = i;
        }
        return {-1, -1};
    }
};

int main()
{
    vector<int> nums = {2, 6, 11, 15};
    Solution s;
    vector<int> answer = s.twoSum(nums, 9);
    for (auto i : answer)
    {
        cout << i << " ";
    }
    return 0;
}