#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
string s;
int c[200];

void init()
{
    cin >> n;
    s = "";
    memset(c, 0, sizeof(c));
}

void check()
{
    for (int i = 1; i < n; i++)
    {
        if (s[i] == (s[i - 1] - 1) || s[i] == (s[i - 1] + 1))
            return;
    }

    for (int i = 0; i < n; i++)
        cout << s[i];
    cout << endl;
}

void Try()
{
    for (int i = 1; i <= n; i++) // duyet qua cac kha nang
    {
        if (s.size() == n) //chap nhan kha nang
        {
            check();
            return;
        }
        if (!c[i])
        {
            s += to_string(i);
            c[i] = 1;
            Try(); // quay lui
            s.pop_back(); // quay lui
            c[i] = 0; // quay lui
        }
    }
}

void run_case()
{
    init();
    Try();
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