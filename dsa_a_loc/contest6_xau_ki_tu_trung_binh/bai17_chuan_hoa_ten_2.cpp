#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define fi first
#define se second

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

    string s;
    vector<string> v;

    while (cin >> s)
        v.push_back(s);

    for (auto &x : v)
    {
        x[0] = toupper(x[0]);
        for (int i = 1; i < x.size(); i++)
            x[i] = tolower(x[i]);
    }

    for (auto &x : v.back())
        x = toupper(x);

    // output 1
    for (int i = 0; i < v.size(); i++)
    {
        if (i == v.size() - 2)
            cout << v[i] << ", ";
        else if (i == v.size() - 1)
            cout << v[v.size() - 1] << endl;
        else
            cout << v[i] << " ";
    }

    // output 2
    cout << v[v.size() - 1] << ", ";
    for (int i = 0; i < v.size() - 1; i++)
        cout << v[i] << " ";

    return 0;
}