#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, a[25][25];
bool ok;
string res;

void init()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    ok = false;
    res = "";
}

void Try(int i, int j)
{
    if (i == n - 1 && j == n - 1)
    {
        cout << res << " ";
        ok = true;
        return;
    }

    // D
    if (i < n && j < n && a[i + 1][j])
    {
        res.push_back('D');
        Try(i + 1, j);
        res.pop_back();
    }

    // R
    if (i < n && j < n && a[i][j + 1])
    {
        res.push_back('R');
        Try(i, j + 1);
        res.pop_back();
    }
}

void run_case()
{
    init();

    if (a[0][0] == 0)
    {
        cout << -1 << endl;
        return;
    }
    Try(0, 0);

    if (!ok)
        cout << -1;
    cout << endl;
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
    cin >> Test;
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