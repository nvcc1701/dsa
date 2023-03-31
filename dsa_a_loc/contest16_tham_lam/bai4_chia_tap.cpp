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
    int n, k;
    cin >> n >> k;
    int a[n];
    for (auto &x : a)
        cin >> x;

    // gom nhieu phan tu lon hon ve 1 phia
    if (k <= n - k)
        sort(a, a + n);
    else
        sort(a, a + n, greater<int>());

    // 2 3 5 7 10 10

    ll sum1 = 0;
    for (int i = 0; i < k; i++)
    {
        sum1 += a[i];
    }

    ll sum2 = 0;
    for (int i = k; i < n; i++)
    {
        sum2 += a[i];
    }

    cout << abs(sum1 - sum2);
}

int main()
{

#define LOCAL

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