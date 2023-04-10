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
    ll n;
    cin >> n;
    priority_queue<ll, vector<ll>, greater<ll>> pq;

    ll x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        pq.push(x);
    }

    ll res = 0;
    while (pq.size() > 1)
    {
        x = pq.top();
        pq.pop();
        y = pq.top();
        pq.pop();

        res += (x + y) % MOD;
        res %= MOD;
        pq.push((x + y) % MOD);
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