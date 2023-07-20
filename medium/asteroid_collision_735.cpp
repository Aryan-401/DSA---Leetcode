#include <bits/stdc++.h>
using namespace std;

//

class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        // Add your function implementation here
        vector<int> answer;
        stack<int> s;
        for (int i = 0; i < asteroids.size(); i++)
        {
            if (asteroids[i] > 0)
            {
                s.push(asteroids[i]);
            }
            else
            {
                while (!s.empty() && s.top() > 0 && s.top() < abs(asteroids[i]))
                {
                    s.pop();
                }
                if (s.empty() || s.top() < 0)
                {
                    s.push(asteroids[i]);
                }
                else if (s.top() == abs(asteroids[i]))
                {
                    s.pop();
                }
            }
        }
        while (!s.empty())
        {
            answer.push_back(s.top());
            s.pop();
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }

    vector<int> asteroidCollisionV2(vector<int> &asteroids){
        
    }
};

int main()
{
    Solution s;
    vector<int> ast = {5, 10, -5};
    vector<int> answer = s.asteroidCollision(ast);
    for (auto i : answer)
    {
        cout << i << " ";
    }
    return 0;
}