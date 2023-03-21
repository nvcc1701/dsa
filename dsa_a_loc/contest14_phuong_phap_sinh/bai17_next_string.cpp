#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void run_case()
{
    string s;
    cin >> s;
    // 1 2 3 6 9 8 7 5 4
    // 1 2 3 7 4 5 6 8 9

    int n = s.size() - 1;
    int i = n - 1;
    while (i >= 0 && s[i] >= s[i + 1])
        i--;

    if (i == -1)
    {
        cout << "NOT EXIST";
        return;
    }
    else
    {
        int j = n;
        while (j >= 0 && s[i] >= s[j])
            j--;
        swap(s[i], s[j]);
        reverse(s.begin() + i + 1, s.end());
    }

    cout << s;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }
    return 0;
}