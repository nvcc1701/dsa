#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;
int a[1001];
int b[1001];
int res = 0;

// 4 6 7
// 4 6 8

void generate()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
        i--;
    if (i == 0)
    {
        res = k;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
            a[j] = a[j - 1] + 1;
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
    for (int i = 1; i <= k; i++)
    {
        cin >> b[i];
        a[i] = b[i];
    }
    generate();

    for (int i = 1; i <= k; i++)
    {
        if (a[i] != b[i])
            res++;
    }

    cout << res;

    return 0;
}