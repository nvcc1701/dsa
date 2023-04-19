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
    int n;
    cin >> n;
    ll a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<ll> f;
    for (int i = 1; i <= n; i++)
    {
        if (f.empty())
            f.push_back(a[i]);
        else
        {
            auto iter = lower_bound(f.begin(), f.end(), a[i]);
            if (iter != f.end())
                *iter = a[i];
            else
                f.push_back(a[i]);
        }
    }

    cout << f.size();
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
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}