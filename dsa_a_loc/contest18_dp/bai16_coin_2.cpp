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
    int n, x;
    cin >> n >> x;
    int a[n + 1];
    int f[x + 1]; // tong so dong xu = i thi co bao nhieu cach tao ra
    memset(f, 0, sizeof(f));

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    f[0] = 1;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i - a[j] >= 0)
                f[i] += f[i - a[j]];
            else
                f[i] = f[i - 1];
        }
    }

    cout << " ";
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
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}