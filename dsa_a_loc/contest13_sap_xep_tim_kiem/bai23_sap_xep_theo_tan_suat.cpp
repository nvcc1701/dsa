#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

map<int, int> mp;
int pos[MAX];
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
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        b[i] = a[i];
        if (mp[a[i]] == 1)
            pos[a[i]] = i;
    }

    sort(a, a + n, [](int a, int b) {
        if (mp[a] == mp[b])
            return a < b;
        return mp[a] > mp[b];
    });

    for (auto x : a)
        cout << x << " ";
    cout << endl;

    sort(b, b + n, [](int a, int b) {
        if (mp[a] == mp[b])
            return pos[a] < pos[b];
        return mp[a] > mp[b];
    });
    for (auto x : b)
        cout << x << " ";

    return 0;
}