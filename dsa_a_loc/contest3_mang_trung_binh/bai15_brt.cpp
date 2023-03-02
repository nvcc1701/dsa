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
    sort(a, a + n);
    int min = INF;
    int count = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int x = abs(a[i] - a[i + 1]);
        if (x < min)
        {
            min = x;
            count = 1;
        }
        else if (x == min)
        {
            ++count;
        }
    }

    cout << min << " " << count;
    return 0;
}