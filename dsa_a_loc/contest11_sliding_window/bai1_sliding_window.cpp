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

    ll s[n] = {0};

    for (int i = 0; i < k; i++)
        s[0] += a[i];
    int max_i = 0;
    for (int i = 1; i <= n - k; i++)
    {
        s[i] = s[i - 1] - a[i - 1] + a[i + k - 1];
        if (s[max_i] < s[i])
            max_i = i;
    }

    cout << s[max_i] << endl;
    while (k--)
    {
        cout << a[max_i++] << " ";
    }

    return 0;
}