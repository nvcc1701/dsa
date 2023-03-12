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

    string s;
    cin >> s;

    s += s[s.size() - 1];

    set<string> se;
    int cnt = 0;
    int Max = -INF;
    se.insert((string) "" + s[0]);

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != s[i - 1])
        {
            cnt++;
        }
        else
        {
            if (cnt > Max)
            {
                Max = cnt;
                se.clear();
                string tmp = "";
                for (int j = i - cnt - 1; j < i; j++)
                    tmp += s[j];
                se.insert(tmp);
            }
            else if (cnt == Max)
            {
                string tmp = "";
                for (int j = i - cnt - 1; j < i; j++)
                    tmp += s[j];
                se.insert(tmp);
            }
            cnt = 0;
        }
    }

    cout << *se.begin();

    return 0;
}