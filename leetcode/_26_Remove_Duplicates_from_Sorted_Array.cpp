#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int solve(vector<int> &nums)
    {
        set<int> se;
        for (auto x : nums)
            se.insert(x);
        nums.clear();

        for (auto x : se)
            nums.push_back(x);
        return se.size();
    }
};

int main()
{
    Solution sol;

    vector<int> in = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int res = sol.solve(in);
    cout << res;

    return 0;
}