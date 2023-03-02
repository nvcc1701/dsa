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
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] *= a[i];
    }
 
    // sort a in descending order
    sort(a, a + n, greater<ll>());
    for (int i = 0; i < n - 2; i++)
    {
        ll sum = 0;
        int l = i + 1, r = n - 1;
        while (l < r)
        {
            sum = a[l] + a[r];
            if (sum == a[i])
            {
                cout << "YES";
                return 0;
            }

            if (sum > a[i])
                l++;
            else
                r--;
        }
    }

    cout << "NO";
    return 0;
}