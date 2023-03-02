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

    int n, m;
    cin >> n >> m;
    int a[n];
    int b[m];

    for (int &x : a)
        cin >> x;
    for (int &x : b)
        cin >> x;

    int i = 0;
    int j = 0;
    ll cnt = 0;

    while (i < n && j < m)
    {
        if (a[i] < b[j])
            i++;
        else if (a[i] > b[j])
            j++;
        else
        {
            ll cnt_a = 1;
            ll cnt_b = 1;
            while (true)
            {
                if (a[i] == a[i + 1])
                {
                    cnt_a++;
                    i++;
                }
                else
                { 
                    i++;
                    break;
                }
            }
            while (b[j] == b[j + 1])
            {
                if (b[j] == b[j + 1])
                {
                    cnt_b++;
                    j++;
                }
                else
                {
                    j++;
                    break;
                }
            }
            cnt += cnt_a * cnt_b;
        }
    }
    cout << cnt;

    return 0;
}