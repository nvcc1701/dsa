#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
int a[1001];
string s;
void run_case()
{
    cin >> s;
    n = s.size();
    s = "X" + s;
    // 10010 -> 10011
    // 01111 -> 10000

    //
    int j = n;
    while (j >= 1 && s[j] == '0')
    {
        s[j] = '1';
        j--;
    }
    if (j != 0)
        s[j] = '0';

    for (int i = 1; i <= n; i++)
        cout << s[i];
    cout << endl;
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