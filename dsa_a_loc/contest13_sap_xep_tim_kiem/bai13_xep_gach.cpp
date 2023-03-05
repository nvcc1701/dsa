#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;

    sort(a, a + n, greater<int>());
    int Min = a[0], cnt = 0;
    for (int i = 0; i < n && Min > 0; i++)
    {
        cnt++;
        Min = min(Min - 1, a[i]);
    }
    cout << cnt;
    return 0;
}