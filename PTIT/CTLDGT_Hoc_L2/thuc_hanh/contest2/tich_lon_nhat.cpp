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
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    sort(v.begin(), v.end(), [](int a, int b) { return a < b; });

    int res = -INF;
    res = max(res, v[0] * v[1] * v[2]);
    res = max(res, v[0] * v[1] * v[n - 1]);
    res = max(res, v[0] * v[1]);

    res = max(res, v[n - 1] * v[n - 2]);
    res = max(res, v[n - 1] * v[n - 2] * v[n - 3]);

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
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}