#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        map<int, int> mp;
        for (int i = 0; i <= k; i++)
        {
            mp[nums[i]]++;
            if (mp[nums[i]] == 2)
                return true;
        }

        for (int i = k + 1; i < nums.size(); i++)
        {
            mp[nums[i - k]]--;
            cout << mp[nums[i - k]] << " " << nums[i - k] << endl;

            mp[nums[i]]++;
            if (mp[nums[i]] == 2)
            {
                // for (auto x : mp)
                //     cout << x.first << " " << x.second << endl;

                // cout << i << " ";
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution sol;

    // vector<int> input;
    // string input;
    vector<int> input = {1, 2, 3, 1, 2, 3};
    sol.containsNearbyDuplicate(input, 2);

    return 0;
}