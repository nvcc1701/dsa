#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void run_case()
{
    string s;
    cin >> s;
    int n = s.size();
    s = "0" + s;

    ll f[n + 1];
    memset(f, 0, sizeof(f));

    ll res = 0;
    for (int i = 1; i <= n; i++)
    {
        f[i] = (s[i] - '0');
        ll sum = s[i] - '0';
        ll p = 10;
        for (int j = i - 1; j >= 1; j--)
        {
            sum += (s[j] - '0') * p;
            f[i] += sum;
            p *= 10;
        }
        res += f[i];
    }

    cout << res << endl;
}

int main()
{

// #define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}