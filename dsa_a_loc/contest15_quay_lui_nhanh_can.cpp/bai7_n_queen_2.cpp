#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
int a[9][9];
int cot[9], x[9];
int cheo1[16], cheo2[16];

void init()
{
    n = 8;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
}

ll res = -INF;
void check()
{
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += a[i][x[i]];
    }

    res = max(res, sum);
}

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (cot[j] == 0 && cheo1[i - j + n] == 0 && cheo2[i + j - 1] == 0)
        {
            x[i] = j;
            cot[j] = 1;
            cheo1[i - j + n] = 1;
            cheo2[i + j - 1] = 1;
            if (i == n)
            {
                check();
            }
            else
            {
                Try(i + 1);
            }
            cot[j] = 0;
            cheo1[i - j + n] = 0;
            cheo2[i + j - 1] = 0;
        }
    }
}

void run_case()
{
    init();
    Try(1);
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