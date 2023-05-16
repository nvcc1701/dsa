#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e3 + 5;

ll f[MAX];

void catalan()
{
    memset(f, 0, sizeof(f));
    f[1] = f[0] = 1;
    for (int i = 2; i <= MAX; i++)
    {
        for (int j = 0; j < i; j++)
        {
            f[i] += (f[j] * f[i - j - 1]);
        }
    }
}

void run_case()
{
    int n;
    cin >> n;
    cout << f[n] << endl;
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
    catalan();
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}