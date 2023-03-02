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

    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a)
        cin >> x;

    ll sum = 0;
    for (int i = 0; i < k; i++)
        sum += a[i];

    cout << sum / k << " ";
    for (int i = 1; i < n - k + 1; i++)
    {
        sum = sum - a[i - 1] + a[i + k - 1];
        cout << sum / k << " ";
    }
    return 0;
}