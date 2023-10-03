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
    string s;
    cin >> s;

    char c = s[0];
    int res = 1;
    int tmp = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == c)
        {
            tmp++;
            res = max(res, tmp);
        }
        else
        {
            c = s[i];
            tmp = 1;
        }
    }

    cout << res;
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