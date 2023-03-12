#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    bool isPalindrome(string s)
    {
        int i = 0, j = s.size() - 1;
        while (i < j)
        {
            if (!isalnum(s[i]))
                i++;
            else if (!isalnum(s[j]))
                j--;
            else
            {
                if (tolower(s[i]) != tolower(s[j]))
                    return false;
                i++;j--;
            }
        }

        return true;
    }
};

int main()
{
    Solution sol;

    // vector<int> input;
    // string input;

    auto input = "A man, a plan, a canal: Panama";

    cout << sol.isPalindrome(input);

    return 0;
}