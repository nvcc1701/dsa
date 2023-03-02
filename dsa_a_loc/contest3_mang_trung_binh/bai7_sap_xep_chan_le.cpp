#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

bool cmp(int a, int b)
{
    if (a % 2 == 0 && b % 2 == 0)
        return a < b;
    else if (a % 2 == 1 && b % 2 == 1)
        return a > b;
    else
        return a % 2 > b % 2;
}

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
    vector<int> v;

    while (n--)
    {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), cmp);

    for (auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}