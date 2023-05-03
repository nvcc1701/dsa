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
    bool c[1001];

    memset(c, false, sizeof(c));

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) { return a.second > b.second; });

    ll cnt = 0, res = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int j = v[i].first - 1;
        while (j >= 0)
        {
            if (!c[j])
            {
                c[j] = true;
                cnt++;
                res += v[i].second;
                break;
            }
            j--;
        }
    }

    cout << cnt << " " << res << endl;
}

int main()
{

// #define LOCAL

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