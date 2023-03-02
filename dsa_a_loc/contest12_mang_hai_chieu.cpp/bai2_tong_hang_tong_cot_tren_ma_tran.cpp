#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

ll a[201][201];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    ll hang = 0;
    ll cot = 0;
    int x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            a[i][m] += a[i][j];
            a[n][j] += a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
        cout << a[i][m] << " ";
    cout << endl;
    for (int i = 0; i < m; i++)
        cout << a[n][i] << " ";

    return 0;
}