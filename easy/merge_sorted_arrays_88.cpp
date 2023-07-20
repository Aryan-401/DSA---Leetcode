#include <bits/stdc++.h>
using namespace std;

//

class Solution
{
public:
    void print1DVector(vector<int> &nums)
    {
        for (auto i : nums)
            cout << i << " ";
        cout << endl;
    }

    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int last = m + n - 1;
        while (m > 0 && n > 0)
        {
            if (nums1[m - 1] > nums2[n - 1])
            {
                nums1[last] = nums1[m - 1];
                m--;
            }
            else
            {
                nums1[last] = nums2[n - 1];
                n--;
            }
            last--;
        }

        while (n > 0)
        {
            nums1[last] = nums2[n - 1];
            n--;
            last--;
        }

        print1DVector(nums1);
    }
};
int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    Solution s;
    s.merge(nums1, 3, nums2, 3);
    return 0;
}