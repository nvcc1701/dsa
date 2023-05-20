#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void run_case()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int t = 0, x = 0, d = 0;
    for (auto x1 : s)
    {
        if (x1 == 'X')
            x++;
        if (x1 == 'D')
            d++;
        if (x1 == 'T')
            t++;
    }

    int cnt = 0;
    int a = 0, b = 0;
    for (int i = n - d; i < n; i++)
    {
        if (s[i] != 'D')
            cnt++;
        if (s[i] == 'X')
            a++;
    }

    for (int i = 0; i < x; i++)
    {
        if (s[i] != 'X')
            cnt++;
        if (s[i] == 'D')
            b++;
    }

    cout << cnt - min(a, b) << endl;
}

int main()
{

// #define LOCAL

#ifdef LOCAL
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