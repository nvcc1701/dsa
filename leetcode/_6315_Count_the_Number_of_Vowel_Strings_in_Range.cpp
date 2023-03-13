#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    bool isVowel(char c)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o')
            return true;
        return false;
    }

    bool check(string s)
    {

        if (isVowel(s[0]) && isVowel(s[s.size() - 1]))
            return true;
        return false;
    }

    int vowelStrings(vector<string> &words, int left, int right)
    {
        int cnt = 0;
        for (int i = left; i <= right; i++)
        {
            string x = words[i];
            if (check(x))
            {
                cout << x << endl;
                cnt++;
            }
        }
        return cnt;
    }
};

int main()
{
    Solution sol;

    vector<string> in = {"hey", "aeo", "mu", "ooo", "artro"};

    int res = sol.vowelStrings(in, 1, 4);
    cout << res;

    return 0;
}