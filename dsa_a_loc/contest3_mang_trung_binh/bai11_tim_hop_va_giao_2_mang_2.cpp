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

    int n, m, x;
    cin >> n >> m;
    int a[n];
    int b[m];

    set<int> se;
    map<int, int> mp1;
    map<int, int> mp2;

    while (n--)
    {
        cin >> x;
        se.insert(x);
        mp1[x]++;
    }

    while (m--)
    {
        cin >> x;
        se.insert(x);
        mp2[x]++;
    }

    for (auto it : se)
    {
        cout << it << " ";
    }

    cout << endl;

    for (auto it : mp1)
    {
        if (mp2[it.first])
            cout << it.first << " ";
    }

    return 0;

    return 0;
}