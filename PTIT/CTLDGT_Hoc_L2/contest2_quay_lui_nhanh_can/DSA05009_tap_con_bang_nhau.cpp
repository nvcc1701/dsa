#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;
int a[200];
bool ok;
int sum;
// 1 5 5 11
void Try(int start)
{
    if (sum == k)
    {
        ok = true;
        return;
    }
    if (ok)
        return;

    for (int j = start; j < n; j++)
    {
        if (sum < k)
        {
            sum += a[j];
            Try(j + 1);
            sum -= a[j];
        }
    }
}

void run_case()
{
    cin >> n;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total += a[i];
    }

    if (total % 2 == 1)
    {
        cout << "NO\n";
        return;
    }
    else
    {
        k = total / 2;
        sum = 0;
        ok = false;
        sort(a, a + n);
        Try(0);

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main()
{

// #define LOCAL

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