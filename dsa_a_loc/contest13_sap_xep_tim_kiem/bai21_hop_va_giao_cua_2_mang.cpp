#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int a[MAX];
int b[MAX];

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
    set<int> se;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        se.insert(a[i]);
        mp[a[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        se.insert(b[i]);
        mp[b[i]]++;
    }

    for (auto x : mp)
        if (x.second > 1)
            cout << x.first << " ";

    cout << endl;
    for (auto x : se)
        cout << x << " ";
    return 0;
}