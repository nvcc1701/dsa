#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

set<int> se;

void input(int x)
{
    while (x)
    {
        se.insert(x % 10);
        x /= 10;
    }
}

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
    int x;
    while (n--)
    {
        cin >> x;
        input(x);
    }

    for (auto x : se)
        cout << x << " ";

    return 0;
}