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

    int x, n, m;
    cin >> n >> m;
    set<int> se;
    set<int> se1;

    while (n--)
    {
        cin >> x;
        se1.insert(x);
    }
    while (m--)
    {
        cin >> x;
        se.insert(x);
    }

    bool check = false;
    for (auto x : se1)
    {
        if (se.find(x) == se.end())
        {
            cout << x << " ";
            check = true;
        }
    }

    if (!check)
        cout << "NOT FOUND";
    return 0;
}