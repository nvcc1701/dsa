#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, s;
int t[31];
int a[31];

void init()
{
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
        cin >> t[i];
}

int res = MAX;
bool ok = false;
void check()
{
    ll sum = 0;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i])
        {
            sum += t[i];
            cnt++;
        }
    }

    if (sum == s)
    {
        ok = true;
        res = min(res, cnt);
    }
}

ll sum = 0;
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        sum += j * t[i];
        if (i == n)
        {
            check();
        }
        else if (sum < s)
        {
            Try(i + 1);
        }
        sum -= j * t[i];
    }
}

void run_case()
{
    init();
    Try(1);

    if (!ok)
    {
        cout << -1;
        return;
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