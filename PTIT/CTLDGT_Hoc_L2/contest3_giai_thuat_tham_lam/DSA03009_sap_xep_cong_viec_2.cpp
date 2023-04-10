#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

using Job = tuple<int, int, int>;
int n;
bool check[1001];
void run_case()
{
    cin >> n;
    vector<Job> v(n);
    for (int i = 0; i < n; i++)
        cin >> get<0>(v[i]) >> get<1>(v[i]) >> get<2>(v[i]);

    memset(check, false, sizeof(check));
    sort(v.begin(), v.end(), [](tuple<int, int, int> a, tuple<int, int, int> b) { return get<2>(a) > get<2>(b); });

    ll total = 0;
    int cnt = 0;
    for (auto [id, deadline, profit] : v)
    {
        for (int i = deadline - 1; i >= 0; i--)
        {
            if (!check[i])
            {
                cnt++;
                total += profit;
                check[i] = 1;
                break;
            }
        }
    }

    cout << cnt << " " << total << endl;
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