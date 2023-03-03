#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
int a[MAX];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    stable_sort(a, a + n, [](int a, int b) {
        if (a == 0)
            return false;
        else if (b == 0)
            return true;
        return false;
    });

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}