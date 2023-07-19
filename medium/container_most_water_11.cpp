#include <bits/stdc++.h>
using namespace std;

// Add any extra import statements you may need here

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        // Add your function implementation here
        int answer = 0;
        int ptr_lo = 0;
        int ptr_hi = height.size() - 1;
        while (!(ptr_lo == ptr_hi))
        {
            int area = min(height[ptr_lo], height[ptr_hi]) * (ptr_hi - ptr_lo);
            answer = max(answer, area);
            if (height[ptr_lo] <= height[ptr_hi])
            {
                ptr_lo++;
            }
            else
            {
                ptr_hi--;
            }
        }
        return answer;
    }
};

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    Solution s;
    cout << s.maxArea(height);
    return 0;
}