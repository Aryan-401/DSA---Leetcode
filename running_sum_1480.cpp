#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int> &nums)
{
    vector<int> answer;
    int val = 0;
    for (auto i : nums)
    {
        answer.push_back(val + i);
        val = val + i;
    }

    return answer;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> answer = runningSum(nums);
    for (auto i : answer)
    {
        cout << i << " ";
    }
    return 0;
}