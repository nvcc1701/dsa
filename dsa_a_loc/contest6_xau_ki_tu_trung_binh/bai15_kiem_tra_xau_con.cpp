#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    getline(cin, s);
    cin.ignore(1);
    getline(cin, t);

    for (int i = 0; i < s.size() - t.size() + 1; i++)
    {
        int j = 0;
        if (s[i] == t[j])
        {
            int tmp = i;
            while (j < t.size())
            {
                if (s[tmp] != t[j])
                {
                    break;
                }
                tmp++;
                j++;
            }

            if (tmp - i == t.size())
            {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";

    return 0;
}