#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void run_case()
{
    int n;
    cin >> n;
    vector<ii> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end(), [](ii a, ii b) { return a.second < b.second; });

    int res = -1, prev_y;
    for (auto [x, y] : v)
    {
        if (res == -1)
        {
            prev_y = y;
            res = 1;
        }
        else
        {
            if (x > prev_y)
            {
                prev_y = y;
                res++;
            }
        }
    }

    cout << res << endl;
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
    cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}