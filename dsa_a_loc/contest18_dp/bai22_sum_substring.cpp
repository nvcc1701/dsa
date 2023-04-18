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
    f[1] = s[1] - '0';

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            f[i] += s[j] * pow(10, j) + (s[i] - '0');
        }
    }
    cout << "";
    // // f[i] = f[i-1]*10+s[i]
}

int main()
{

#define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}