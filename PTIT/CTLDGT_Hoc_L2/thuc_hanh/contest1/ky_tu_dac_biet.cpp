#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

string s;
ll k, n;

char Try(ll k, ll n)
{
    if (k <= s.size())
        return s[k];
    if (k < n / 2)
        return Try(k, n / 2);
    if (k == n / 2)
        return Try(k - 1, n / 2);
    if (k > n / 2)
        return Try(k - n / 2 - 1, n / 2);
}

void run_case()
{
    // COW
    // 123
    // COWWCO
    // 123312
    // 12345
    cin >> s >> k;
    n = s.size();
    s = "0" + s;
    while (n <= k)
        n *= 2;
    cout << Try(k, n);
    cout << endl;
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