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

    //f[1] = 1
    //5 = 4 + 1

    int f[n + 1];
    memset(f, 0, sizeof(f));
    for (int i = 1; i <= n; i++)
    {
        f[i] = i;
        for (int j = 1; j * j <= i; j++)
        {
            f[i] = min(f[i], f[i - j * j] + 1);
        }
    }

    cout << f[n] << endl;
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
    cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}