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

    int i = 0, j = 0, sum_weigt = 0, min_num_gift = 999;
    bool flag = false;
    while (j < n)
    {
        if (sum_weigt >= s)
        {
            flag = true;
            min_num_gift = min(min_num_gift, j - i);
            sum_weigt -= a[i];
            i++;
        }
        else
        {
            sum_weigt += a[j];
            j++;
        }
    }

    if (flag)
    {

        cout << min_num_gift;
    }
    else
    {
        cout << -1;
    }

    return 0;
}