#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    cout << "Pattern 1:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

    cout << "Pattern 2:" << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Pattern 3:" << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

    cout << "Pattern 4:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j >= 0; j--)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}