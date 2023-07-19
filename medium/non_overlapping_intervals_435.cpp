#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {
        // Add your function implementation here
        int count = 0;
        sort(intervals.begin(), intervals.end(), [](const vector<int> &a, const vector<int> &b)
             { return a[1] < b[1]; });
        int end = intervals[0][1];
        for (unsigned i = 1; i < intervals.size(); i++)
        {
            if (intervals[i][0] < end)
            {
                count++;
            }
            else
            {
                end = intervals[i][1];
            }
        }
        return count;
    }
};

int main()
{
    vector<vector<int>> args = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};

    Solution s;
    cout << s.eraseOverlapIntervals(args);
    return 0;
}