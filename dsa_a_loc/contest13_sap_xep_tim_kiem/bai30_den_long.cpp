#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, l;
int a[MAX];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> l;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int x = (a[i + 1] - a[i]);
        ans = max(ans, x);
    }

    ans = max({ans, 2 * a[0], 2 * (l - a[n - 1])});
    cout << fixed << setprecision(10) << (double)ans / 2 << endl;

    return 0;
}