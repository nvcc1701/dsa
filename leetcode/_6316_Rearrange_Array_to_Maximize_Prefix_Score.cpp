#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int maxScore(vector<int> &nums)
    {
        sort(nums.begin(), nums.end(), [](int a, int b) { return b < a; });

        for (auto x : nums)
            cout << x << " ";

        long long res = nums[0];
        long long Max = res;
        for (int i = 1; i < nums.size(); i++)
        {
            res += nums[i];
            Max = max(Max, res);
        }
        return Max;
    }
};

int main()
{
    Solution sol;

    // vector<string> in = {"hey", "aeo", "mu", "ooo", "artro"};
    vector<int> in = {-687767, -860350, 950296,  52109,  510127, 545329, -291223, -966728, 852403, 828596,
                      456730,  -483632, -529386, 356766, 147293, 572374, 243605,  931468,  641668, 494446};
    int res = sol.maxScore(in);
    cout << res;

    return 0;
}