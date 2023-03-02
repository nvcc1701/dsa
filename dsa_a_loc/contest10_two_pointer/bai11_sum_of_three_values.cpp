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
    for (int i = 0; i < n - 2; i++)
    {
        int l = i + 1, r = n - 1;
        ll sum = 0;
        while (l < r)
        {
            sum = a[i] + a[l] + a[r];
            if (sum == k)
            {
                cout << "YES";
                return 0;
            }
            else
            {
                if (sum < k)
                    l++;
                else
                    r--;
            }
        }
    }
    cout << "NO";

    return 0;
}