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

    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a)
        cin >> x;

    map<int, int> mp;
    for (int i = 0; i < k; i++)
        mp[a[i]]++;

    cout << mp.begin()->first << " " << mp.rbegin()->first << endl;

    for (int i = 1; i <= n - k; i++)
    {
        // delete old emelent
        mp[a[i - 1]]--;
        if (mp[a[i - 1]] == 0)
            mp.erase(a[i - 1]);

        // add new elemnt
        mp[a[i + k - 1]]++;

        // cout << a[i - 1] << " " << a[i + k - 1] << endl;
        cout << mp.begin()->first << " " << mp.rbegin()->first << endl;
    }
    return 0;
}