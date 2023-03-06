#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL)
    {
    }
};

class Solution
{
  public:
    bool hasCycle(ListNode *head)
    {
    }
};

int main()
{
    Solution sol;

    auto input = {head = [ 3, 2, 0, -4 ], pos = 1};

    cout << sol.hasCycle(input);

    return 0;
}