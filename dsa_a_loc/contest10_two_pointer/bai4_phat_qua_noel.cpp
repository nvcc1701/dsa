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

    int i = 0, j = 0, max_num_gift = 0, sum_weight = 0;
    while (j < n)
    {
        if (sum_weight + a[j] <= s)
        {
            sum_weight += a[j];
            j++;
            max_num_gift = max(max_num_gift, j - i);
        }
        else
        {
            sum_weight -= a[i];
            i++;
        }
    }

    cout << max_num_gift;

    return 0;
}