#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

ll n, s;
int t[31];
bool ok = false;

void init()
{
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
    {
        cin >> t[i];
    }
}

vector<int> tmp;
ll sum = 0;
ll res = INF;
void Try(int cnt)
{
    for (int j = cnt; j <= n; j++)
    {
        tmp.push_back(t[j]);
        sum += t[j];
        if (sum == s)
        {
            ok = true;
            res = min(res, (ll)tmp.size());
        }
        else if (sum < s)
        {
            Try(j + 1);
        }
        tmp.pop_back();
        sum -= t[j];
    }
}

void run_case()
{
    init();
    Try(1);
    if (ok)
        cout << res;
    else
        cout << -1;
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