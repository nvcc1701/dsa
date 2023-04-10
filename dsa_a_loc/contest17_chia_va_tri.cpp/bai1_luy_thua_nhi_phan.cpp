#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;

ll bipow(int a, int b)
{
    if (b == 0)
        return 1;

    if (b % 2 == 0)
    {
        ll x = bipow(a, b / 2);
        x %= MOD;
        x *= x;
        x %= MOD;
        return x % MOD;
    }
    else
    {
        ll x = bipow(a, b / 2);
        x %= MOD;
        x *= x;
        x %= MOD;
        x = (x * a) % MOD;
        x %= MOD;
        return x;
    }
}

void run_case()
{
    cin >> n >> k;
    cout << bipow(n, k);
}

int main()
{

// #define LOCAL

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