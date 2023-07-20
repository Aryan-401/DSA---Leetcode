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
    int candy(vector<int> &ratings){
        // Add your function implementation here
        int answer;
        int n = ratings.size();
        vector<int> candies(n, 1);
        for (int i = 1; i < n; i++)
        {
            if (ratings[i] > ratings[i - 1])
                candies[i] = candies[i - 1] + 1;
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (ratings[i] > ratings[i + 1])
                candies[i] = max(candies[i], candies[i + 1] + 1);
                //explain this for loop
                
        }
        answer = accumulate(candies.begin(), candies.end(), 0);
        return answer;
    }
};

int main()
{
    vector<int> ratings = {1, 2, 2};
    Solution s;
    cout << s.candy(ratings);
    return 0;
}