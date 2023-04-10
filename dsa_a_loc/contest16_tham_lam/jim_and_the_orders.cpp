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

    ll x, y;

    vector<tuple<ll, ll, ll>> v;
    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y;
        v.push_back({i, x, y});
    }

    sort(v.begin(), v.end(), [](tuple<ll, ll, ll> a, tuple<ll, ll, ll> b) {
        int sum1 = get<1>(a) + get<2>(a);
        int sum2 = get<1>(b) + get<2>(b);

        if (sum1 == sum2)
        {
            return get<0>(a) < get<0>(b);
        }
        return sum1 < sum2;
    });

    for (auto x : v)
    {
        cout << get<0>(x) << " ";
    }
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