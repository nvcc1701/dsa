#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

bool isPalin(string s)
{
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

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
    set<string> se;
    while (cin >> s)
    {
        if (isPalin(s) && !se.count(s))
        {
            v.push_back(s);
            se.insert(s);
        }
    }

    stable_sort(v.begin(), v.end(), [](string a, string b) { return a.size() < b.size(); });

    for (auto x : v)
        cout << x << " ";

    return 0;
}