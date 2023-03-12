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

    ll sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            ll num = 0;
            bool flag = false;
            while (isdigit(s[i]))
            {
                while (s[i] == '0' && !flag)
                {
                    i++;
                }
                flag = true;

                num = num * 10 + (s[i] - '0');
                i++;
            }
            sum += num;
        }
    }
    cout << sum;
    return 0;
}