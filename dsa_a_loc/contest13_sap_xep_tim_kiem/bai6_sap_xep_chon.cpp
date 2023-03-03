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

    int n;
    cin >> n;
    int a[n];
    for (auto &x : a)
        cin >> x;

    int min_pos;
    for (int i = 0; i < n - 1; i++)
    {
        min_pos = i;
        for (int j = i + 1; j < n; j++)
            if (a[min_pos] > a[j])
                min_pos = j;
        swap(a[i], a[min_pos]);

        cout << "Buoc " << i + 1 << ": ";
        for (auto x : a)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}