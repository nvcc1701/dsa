#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;

void run_case()
{
    cin >> n >> k;
    int a[n];
    bool f[k + 1];
    memset(f, false, sizeof(f));

    for (auto &x : a)
        cin >> x;
    for (int i = 1; i <= k; i++)
    {
        for (auto x : a)
        {
            if (i >= x && !f[i - x])
                f[i] = true;
            // cout << i - x << " " << f[i] << endl;
        }
    }

    
    if (f[k])
        cout << "First";
    else
        cout << "Second";
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