#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;
int a[9];

void result()
{
    for (int i = 1; i <= k; i++)
        cout << a[i];
    cout << endl;
}

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        a[i] = j;

        if (i == k)
        {
            result();
        }
        else
        {
            Try(i + 1);
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    Try(1);

    return 0;
}