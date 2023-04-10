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

    map<int, int> mp;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }

    vector<pair<int, int>> v;
    for (auto x : mp)
        v.push_back(x);

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
        if (a.second == b.second)
            return a.first < b.first;
        return a.second > b.second;
    });

    ll waitting = v[0].first * v[0].second;
    ll res = v[0].second;
    for (int i = 1; i < v.size(); i++)
    {
        if (waitting < v[i].first)
        {
            res += v[i].second;
            waitting += v[i].first * v[i].second;
        }
    }

    cout << res;
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