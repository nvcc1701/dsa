#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

struct job
{
    int id, deadline, profit;
};

void run_case()
{
    int n;
    cin >> n;
    vector<job> v;
    int x, y, z;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        v.push_back({x, y, z});
    }

    sort(v.begin(), v.end(), [](job a, job b) { return a.profit > b.profit; });

    bool time[n] = {false};
    ll total = 0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = v[i].deadline - 1; j >= 0; j--)
        {
            if (!time[j])
            {
                total += v[i].profit;
                time[j] = true;
                break;
            }
        }
    }

    cout << total;
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