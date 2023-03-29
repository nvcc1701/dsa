#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k, s = 0;
int a[21];
int x[21];
bool used[101];
void init()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
}

int cnt = 0;
bool ok = false;
void Try(int i, int start, int sum, int cnt)
{
    if (cnt == k)
    {
        ok = true;
        return;
    }
    if (ok)
        return;

    for (int j = start; j <= n; j++)
    {
        if (sum + a[j] <= s && !used[j])
        {
            used[j] = true;
            x[i] = a[j];

            if (sum + a[j] == s)
            {
                Try(i + 1, 1, 0, cnt + 1);
            }
            else
            {
                Try(i + 1, j + 1, sum + a[j], cnt);
            }
            used[j] = false;
        }
    }
}

void run_case()
{
    init();
    if (s % k == 0)
    {
        s /= k;
        Try(1, 1, 0, 0);
        cout << ok;
    }
    else
    {
        cout << 0;
    }
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