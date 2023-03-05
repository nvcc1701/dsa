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
    int b[n], c[m];

    for (auto &x : b)
        cin >> x;
    for (auto &x : c)
        cin >> x;

    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (b[i] <= c[j])
        {
            cout << "b" << i + 1 << " ";
            i++;
        }
        else
        {
            cout << "c" << j + 1 << " ";
            j++;
        }
    }

    while (i < n)
    {
        cout << "b" << i + 1 << " ";
        i++;
    }

    while (j < m)
    {
        cout << "c" << j + 1 << " ";
        j++;
    }

    return 0;
}