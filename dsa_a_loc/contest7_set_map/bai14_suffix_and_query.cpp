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

    int x, n;
    cin >> n;
    set<int> se;
    vector<int> v(n);
    vector<int> v2;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v2.push_back(x);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        se.insert(v2[i]);
        v[i] = se.size();
    }

    int q;
    cin >> q;
    while (q--)
    {
        cin >> x;
        cout << v[x] << endl;
    }
    return 0;
}