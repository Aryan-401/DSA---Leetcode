#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> answer;
        for (int i = 1; i <= n; i++)
        {
            if (i % 15 == 0)
            {
                answer.push_back("FizzBuzz");
            }
            else if (i % 3 == 0)
            {
                answer.push_back("Fizz");
            }
            else if (i % 5 == 0)
            {
                answer.push_back("Buzz");
            }
            else
            {
                answer.push_back(to_string(i));
            }
        }
        return answer;
    }
};

int main()
{

    Solution s;
    s.fizzBuzz(5);
    for (auto i : s.fizzBuzz(20))
    {
        cout << i << " ";
    }
    return 0;
}