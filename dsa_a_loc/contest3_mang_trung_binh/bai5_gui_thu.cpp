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
    int a[n];
    for (int &x : a)
        cin >> x;

    int minn;
    int maxx;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            minn = abs(a[0] - a[1]);
            maxx = abs(a[0] - a[n - 1]);
        }
        else if (i == n - 1)
        {
            minn = abs(a[n - 1] - a[n - 2]);
            maxx = abs(a[0] - a[n - 1]);
        }
        else
        {
            minn = min(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1]));
            maxx = max(abs(a[i] - a[n - 1]), abs(a[i] - a[0]));
        }
        cout << minn << " " << maxx << endl;
    }

    return 0;
}