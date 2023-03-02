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

    sort(a, a + n);
    int r = n - 1, l = 0, sum = 0;
    while (l < n && r > 0)
    {
        sum += a[r] + a[l];
        if (sum == k)
        {
            cout << "YES";
            return 0;
        }
        else
        {
            if (sum > k)
            {
                sum -= a[r];
                r--;
            }
            else
            {
                sum -= a[l];
                l++;
            }
        }
    }
    cout << "NO";
    return 0;
}