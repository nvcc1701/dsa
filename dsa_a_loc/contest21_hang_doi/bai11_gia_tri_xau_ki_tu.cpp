#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void run_case()
{

    int k;
    string s;
    cin >> k >> s;

    map<int, int> mp;
    for (auto x : s)
        mp[x]++;

    priority_queue<ll> pq;
    for (auto [x, y] : mp)
        pq.push(1ll * y);

    while (k > 0)
    {
        ll x = pq.top();
        pq.pop();
        if (x == 0)
            break;
        pq.push(x - 1);
        k--;
    }

    ll res = 0;
    while (!pq.empty())
    {
        ll x = pq.top();
        pq.pop();
        res += x * x;
    }
    cout << res << endl;
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
    cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}