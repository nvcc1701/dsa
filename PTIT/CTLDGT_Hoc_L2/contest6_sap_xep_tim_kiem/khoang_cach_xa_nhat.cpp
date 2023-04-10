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
    vector<pair<int, int>> v;

    int x;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        v.push_back({i, x});
    }

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) { return a.second < b.second; });

    int i = 0, j = v.size() - 1;
    int Max = -INF, Min = INF;
    while (i < j)
    {
        Min = min(Min, v[i].first);
        Max = max(Max, v[j].first);
        i++;
        j--;
    }

    if (Min >= Max)
        cout << "-1\n";
    else
        cout << Max - Min << "\n";

    // 1 2 3 8 10 30 33 34 80
    // 9
    // 34 8 10 3 2 80 30 33 1
    //    i              j
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
    cin >> Test;
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