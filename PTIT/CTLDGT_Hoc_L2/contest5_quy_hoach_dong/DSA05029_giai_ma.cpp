#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

string s;

int counts()
{
    int f[100] = {0};
    if (s[0] == '0')
        return 0;

    f[0] = 1;
    f[1] = 1;

    for (int i = 2; i <= s.size(); i++)
    {
        if (s[i - 1] > '0')
            f[i] = f[i - 1];
        if (s[i - 2] == '1' || (s[i - 2] == '2' && s[i - 1] <= '6'))
            f[i] += f[i - 2];
    }

    return f[s.size()];
}

void run_case()
{
    cin >> s;
    cout << counts() << endl;
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
    cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}