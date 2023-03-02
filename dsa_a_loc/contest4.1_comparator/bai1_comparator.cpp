#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int cntEven(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        int x = n % 10;
        n /= 10;
        if (x % 2 == 0)
            cnt++;
    }
    return cnt;
}

int cntOdd(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        int x = n % 10;
        n /= 10;
        if (x % 2 != 0)
            cnt++;
    }
    return cnt;
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
    int a[n];
    for (int &x : a)
    {
        cin >> x;
    }

    sort(a, a + n, [](int a, int b) -> bool {
        if (cntEven(a) == cntEven(b))
            return a < b;
        return cntEven(a) < cntEven(b);
    });

    for (auto x : a)
        cout << x << " ";
    cout << endl;

    stable_sort(a, a + n, [](int a, int b) -> bool { return cntOdd(a) < cntOdd(b); });
    for (auto x : a)
        cout << x << " ";
    return 0;
}