#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int sumNumber(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
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
    for (auto &x : a)
        cin >> x;

    sort(a, a + n, [](int a, int b) {
        if (sumNumber(a) == sumNumber(b))
        {
            return a < b;
        }
        return sumNumber(a) < sumNumber(b);
    });

    for (auto x : a)
        cout << x << " ";
    return 0;
}