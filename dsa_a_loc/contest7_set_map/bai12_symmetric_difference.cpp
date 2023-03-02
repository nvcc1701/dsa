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
    set<int> se1;
    set<int> se2;

    while (n--)
    {
        cin >> x;
        se1.insert(x);
    }

    while (m--)
    {
        cin >> x;
        se2.insert(x);
    }

    vector<int> v;
    // set_symmetric_difference(se1.begin(), se1.end(), se2.begin(), se2.end(), v.begin());
    set_symmetric_difference(se1.begin(), se1.end(), se2.begin(), se2.end(), back_inserter(v));
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}