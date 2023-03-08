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

    string s;
    cin >> s;

    bool flag = false;
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            cout << "NO";
            return 0;
        }

        if (s[i] == '6')
            flag = true;

        i++;
        j--;
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}