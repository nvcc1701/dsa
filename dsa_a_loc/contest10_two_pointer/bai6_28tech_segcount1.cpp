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

    int n, s;
    cin >> n >> s;
    int a[n];
    for (int &x : a)
        cin >> x;

    int i = 0, j = 0, sum = 0, count = 0;

    for (int j = 0; j < n; j++)
    {
        sum += a[j];

        while (sum > s)
        {
            sum -= a[i];
            i++;
        }
        count += j - i + 1;
    }
    cout << count;

    return 0;
}