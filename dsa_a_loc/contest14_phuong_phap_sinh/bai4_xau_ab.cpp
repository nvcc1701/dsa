#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
char a[11];
map<char, char> mp = {{'0', 'B'}, {'1', 'A'}};
bool flag = false;
void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == '1')
    {
        a[i] = '0';
        i--;
    }

    if (i == 0)
        flag = true;
    else
        a[i] = '1';
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; i++)
        a[i] = '0';

    while (!flag)
    {
        for (int i = 1; i <= n; i++)
            cout << mp[a[i]];
        cout << endl;
        sinh();
    }

    return 0;
}

// 0 1 2 3 4
//   1 1 1 1
