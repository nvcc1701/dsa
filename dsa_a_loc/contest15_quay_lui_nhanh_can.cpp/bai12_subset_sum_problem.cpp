#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
int a[21];
int b[21];
bool ok = false;

void init()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> b[i];
}

bool check()
{
    ll sum1 = 0;
    ll sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i])
            sum1 += b[i];
        else
            sum2 += b[i];
    }

    return sum1 == sum2;
}

void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n - 1)
        {
            if (check())
            {
                ok = true;
                return;
            }
        }
        else
        {
            Try(i + 1);
        }
    }
}

void run_case()
{
    init();
    Try(0);

    if (ok)
    {
        cout << 1;
    }
    else
        cout << 0;
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