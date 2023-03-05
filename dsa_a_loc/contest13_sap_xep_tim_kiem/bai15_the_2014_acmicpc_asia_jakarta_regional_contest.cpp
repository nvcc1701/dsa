#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;
int a[MAX];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    for (int &x : a)
        cin >> x;
    sort(a, a + n);

    int cnt = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] > k)
            cnt++;
    }

    cout << cnt;

    return 0;
}