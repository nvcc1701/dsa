#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

ll n, x;
ll a[MAX];

bool binarySearch(int i, int k)
{
    // cout << i << " " << k << endl;
    int l = i + 1, r = n - 1;
    int mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
      
        if (a[mid] == k)
            return true;
        else if (a[mid] < k)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return false;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> x;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    for (int i = 0; i < n - 1; i++)
    {
        if (binarySearch(i, x + a[i]))
        {
            cout << 1;
            return 0;
        }
    }
    cout << -1;
    return 0;
}