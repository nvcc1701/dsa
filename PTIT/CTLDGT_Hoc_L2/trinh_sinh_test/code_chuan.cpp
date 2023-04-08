#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;
int a[105];
int sum;
bool check;

void Try(int i, int cur = 0)
{
    if (check)
        return;
    if (cur == sum)
    {
        check = 1;
        cout << "YES\n";
        return;
    }
    if (cur > sum)
        return;
    for (int j = i; j <= n; ++j)
        Try(j + 1, cur + a[j]);
}

void run_case()
{
    cin >> n;
    sum = 0;
    check = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum & 1)
        cout << "NO\n";
    else
    {
        sum >>= 1;
        Try(1);
        if (!check)
            cout << "NO\n";
    }
}

int main()
{

#define LOCAL

#ifdef LOCAL
    freopen("test.txt ", "r", stdin);
    freopen("output1.txt ", "w", stdout);
    auto start = chrono::high_resolution_clock::now();
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
        cout << endl;
    }

#ifdef LOCAL
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    auto startT = chrono::system_clock::to_time_t(start);
    // cout << "\n\n" << ctime(&startT) << (double)duration.count() / 1000 << " seconds\n";
#endif

    return 0;
}