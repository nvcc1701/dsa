#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> Max;
    vector<pair<int, int>> Min;
    Max.push_back({0, 0});
    Min.push_back({0, 0});

    int a[n + 1][m + 1];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] > a[Max[0].first][Max[0].second])
            {
                Max.clear();
                Max.push_back({i, j});
            }
            else if (a[i][j] == a[Max[0].first][Max[0].second])
            {
                if (i != 0 || j != 0)
                    Max.push_back({i, j});
            }

            if (a[i][j] < a[Min[0].first][Min[0].second])
            {
                Min.clear();
                Min.push_back({i, j});
            }
            else if (a[i][j] == a[Min[0].first][Min[0].second])
            {
                if (i != 0 || j != 0)
                    Min.push_back({i, j});
            }
        }
    }

    cout << a[Min[0].first][Min[0].second] << endl;
    for (auto x : Min)
        cout << x.first + 1 << " " << x.second + 1 << endl;
    cout << a[Max[0].first][Max[0].second] << endl;
    for (auto x : Max)
        cout << x.first + 1 << " " << x.second + 1 << endl;

    return 0;
}