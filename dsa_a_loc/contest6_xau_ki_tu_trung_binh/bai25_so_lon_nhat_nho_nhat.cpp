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

    int m, s;
    cin >> m >> s;
    vector<int> v;
    int i = 9;
    while (i > 0 && s > 0)
    {
        
        int t = s / i;
        s = s % i;
        while (t > 0)
        {
            v.push_back(i);
            t--;
        }
        i--;
    }

    for (auto x : v)
        cout << x << " ";
    return 0;
}