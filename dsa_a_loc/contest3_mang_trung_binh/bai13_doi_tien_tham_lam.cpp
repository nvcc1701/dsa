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

    ll n, cnt = 0;
    cin >> n;

    vector<int> v = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    int j = v.size() - 1;
    while (n > 0)
    {
        cnt += n / v[j];
        n %= v[j];
        j--;
    }
    cout << cnt;
    return 0;
}