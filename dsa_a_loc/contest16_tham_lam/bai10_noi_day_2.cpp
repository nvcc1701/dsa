#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, x;

void run_case()
{
    cin >> n;
    priority_queue<ll> q;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        q.push(x);
    }

    ll sum = 0;
    ll a, b, c;
    while (q.size() > 1)
    {
        a = q.top();
        q.pop();
        b = q.top();
        q.pop();
        c = a + b;

        sum += (a) % MOD + (b) % MOD;
        sum %= MOD;
        q.push(c);
    }
    cout << sum;
}

int main()
{


#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
    auto start = chrono::high_resolution_clock::now();
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

#ifdef LOCAL
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    auto startT = chrono::system_clock::to_time_t(start);
    cout << "\n\n" << ctime(&startT) << (double)duration.count() / 1000 << " seconds\n";
#endif

    return 0;
}