#include <bits/stdc++.h>
using namespace std;

//

class Solution
{
public:
    void print1DVector(vector<int> &vector1D)
    {
        for (auto i : vector1D)
            cout << i << " ";
        cout << endl;
    }
    double knightProbability(int n, int k, int row, int column)
    {
        // Add your function implementation here
        double answer;
        vector<vector<double>> dp(n, vector<double>(n, 0));
        vector<vector<int>> directions = {{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};
        dp[row][column] = 1;
        for (int i = 0; i < k; i++)
        {
            vector<vector<double>> dp2(n, vector<double>(n, 0));
            for (int j = 0; j < n; j++)
            {
                for (int l = 0; l < n; l++)
                {
                    for (auto direction : directions)
                    {
                        int x = j + direction[0];
                        int y = l + direction[1];
                        if (x >= 0 && x < n && y >= 0 && y < n)
                        {
                            dp2[j][l] += dp[x][y] / 8.0;
                        }
                    }
                }
            }
            dp = dp2;
        }
        for (auto i : dp)
        {
            for (auto j : i)
            {
                answer += j;
            }
        }
        return answer;
    }
};

int main()
{
    Solution s;
    cout << s.knightProbability(3, 2, 0, 0);
    return 0;
}