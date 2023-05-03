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
    priority_queue<ll, vector<ll>, greater<ll>> q;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    ll res = 0;
    while (q.size() > 1)
    {
        ll x = q.top();
        q.pop();
        ll y = q.top();
        q.pop();

        ll sum = x + y;
        sum %= MOD;
        res += sum;
        res %= MOD;
        q.push(sum);
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