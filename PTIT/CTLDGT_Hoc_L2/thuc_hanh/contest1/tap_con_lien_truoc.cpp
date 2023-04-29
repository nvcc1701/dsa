#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;
int a[1001];

void run_case()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int j = k;
    while (j > 0 && a[j] != n - k + j)
    {
        j--;
    }

    if (j == 0)
    {
        for (int i = k; i >= 1; i--)
            cout << n - i + 1 << " ";
    }
    else
    {
        // 1 2 5 6
        // 1 2 4 7

        // 1 3 6 7
        // 1 2 6 7
        a[j]--;
        for (int i = j + 1; i <= k; i++)
            a[i] = a[i - 1] - 1;

        for (int i = 1; i <= k; i++)
            cout << a[i] << " ";
    }
    cout << endl;
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