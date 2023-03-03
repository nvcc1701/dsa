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

    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;

    sort(a, a + n, [](int a, int b) {
        if (a % 2 == 0 && b % 2 == 0)
        {
            return a < b;
        }
        if (a % 2 == 1 && b % 2 == 1)
        {
            return a > b;
        }
        if (a % 2 == 0 && b % 2 == 1)
        {
            return false;
        }
        if (a % 2 == 1 && b % 2 == 0)
        {
            return true;
        }
    });

    for (auto x : a)
        cout << x << " ";

    return 0;
}