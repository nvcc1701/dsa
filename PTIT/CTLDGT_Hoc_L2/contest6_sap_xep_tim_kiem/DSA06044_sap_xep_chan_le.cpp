#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;

void run_case()
{
    cin >> n;
    vector<pair<int, int>> v;
    int x;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        v.push_back({i, x});
    }

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
        if (a.first % 2 && b.first % 2)
            return a.second < b.second;
        if (!(a.first % 2) && !(b.first % 2))
            return a.second > b.second;

        if (!(a.first % 2) && b.first % 2)
            return false;

        if (a.first % 2 && !(b.first % 2))
            return true;
    });

    for (auto [fi, se] : v)
        cout << se << " ";
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
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}