#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void run_case()
{
    int n;
    cin >> n;
    int a[n + 1];
    int s = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s += a[i];
    }

    int f[s + 1]; // co the tao duoc tong i khong?
    memset(f, 0, sizeof(f));

    f[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = s; j >= 1; j--)
        {
            if (f[j - a[i]] == 1)
                f[j] = 1;
        }
    }

    for (int i = 0; i <= s; i++)
    {
        if (f[i])
            cout << i << " ";
    }
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
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}