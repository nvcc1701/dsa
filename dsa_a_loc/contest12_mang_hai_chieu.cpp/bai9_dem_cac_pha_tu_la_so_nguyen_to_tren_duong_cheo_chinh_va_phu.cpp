#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}

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
    int a[n][n];
    // map<int, int> mp;
    // map<int, int> mp2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(a[i][i]))
        {
            cnt++;
            // cout << a[i][i] << " ";
        }
        if (isPrime(a[i][n - 1 - i]))
        {
            cnt++;
            // cout << a[i][n - 1 - i] << " ";
        }
    }

    if (n % 2 == 1)
    {
        if (isPrime(a[n / 2][n / 2]))
        {
            cnt--;
        }
    }

    cout << cnt;

    return 0;
}