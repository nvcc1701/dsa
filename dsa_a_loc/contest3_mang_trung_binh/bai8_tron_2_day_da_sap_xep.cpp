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

    int i = 0;
    int j = 0;
    while (i < n && j < m)
        if (a[i] <= b[j])
            cout << a[i++] << " ";
        else
            cout << b[j++] << " ";

    while (i < n)
        cout << a[i++] << " ";
    while (j < m)
        cout << b[j++] << " ";

    return 0;
}