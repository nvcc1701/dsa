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

    int n, m;
    cin >> n >> m;

    int a[n];
    int b[m];
    for (int &x : a)
        cin >> x;
    for (int &x : b)
        cin >> x;

    int j = 0;
    for (int i = 0; i < m; i++)
    {
        while (a[j] < b[i] && j < n)
        {
            j++;
        }
        cout << j << " ";
    }

    return 0;
}