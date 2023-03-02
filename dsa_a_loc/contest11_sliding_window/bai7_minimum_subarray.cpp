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
    int l = 0;

    bool flag = false;
    pair<int, int> p = {INF, INF}; // index, size
    for (int r = 0; r < n; r++)
    {
        if (sum >= k)
        {
            flag = true;
            if (p.second > (r - l + 1))
            {
                p.first = l;
                p.second = r - l + 1;
            }
        }
        sum += a[r];

        while (sum > k)
        {
            sum -= a[l];
            l++;
        }

        // cout << l << " " << r - l + 1 << endl;
        // cout << p.first << "  " << p.second << endl;
    }

    if (sum == k && !flag)
    {
        for (auto x : a)
            cout << x << " ";
    }
    else if (sum != k && !flag)
    {
        cout << -1;
    }
    else
    {
        for (int i = p.first; i < p.first + p.second; i++)
            cout << a[i] << " ";
    }

    return 0;
}