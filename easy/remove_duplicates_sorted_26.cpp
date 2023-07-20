#include <bits/stdc++.h>
using namespace std;

// Add any extra import statements you may need here

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        // Add your function implementation here
        unordered_map<int, int> m;
        for (unsigned int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        nums.clear();
        for (auto i : m)
        {
            nums.push_back(i.first);
        }

        // reverse nums vector
        sort(nums.begin(), nums.end());
        int answer = m.size();
        return answer;
    }

    int removeDuplicatesV2(vector<int> &nums)
    {
        int j = 1;
        for (unsigned int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};

int main()
{
    vector<int> nums = {1, 1, 2};
    Solution s;
    s.removeDuplicates(nums);
    return 0;
}