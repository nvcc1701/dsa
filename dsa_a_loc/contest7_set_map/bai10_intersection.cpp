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
    set<int> se1;
    set<int> se2;
    vector<int> v;

    while (n--)
    {
        cin >> x;
        se1.insert(x);
        v.push_back(x);
    }

    while (m--)
    {
        cin >> x;
        se2.insert(x);
    }

    set<int> se3;
    set_intersection(se1.begin(), se1.end(), se2.begin(), se2.end(), inserter(se3, se3.begin()));
    for (auto i : v)
    {
        if (se3.find(i) != se3.end())
        {
            cout << i << " ";
        }
    }

    return 0;
}