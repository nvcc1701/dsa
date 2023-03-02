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
    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            int l = j + 1, r = n - 1;
            int sum = 0;
            while (l < r)
            {
                sum = a[i] + a[j] + a[l] + a[r];
                if (sum == k)
                {
                    cout << "YES";
                    return 0;
                }
                else
                {
                    if (sum > k)
                    {
                        r--;
                    }
                    else
                    {
                        l++;
                    }
                }
            }
        }
    }
    cout << "NO";
    return 0;
}