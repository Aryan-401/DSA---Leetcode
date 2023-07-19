#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        // Add your function implementation here
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

int main()
{
    ListNode *head = new ListNode(1);
    ListNode *temp = head;
    for (int i = 2; i <= 10; i++)
    {
        temp->next = new ListNode(i);
        temp = temp->next;
    }
    Solution s;
    cout << s.middleNode(head)->val;
    return 0;
}