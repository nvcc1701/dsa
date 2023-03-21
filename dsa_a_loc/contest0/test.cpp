#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, m;
string s;

void run_case()
{
    cin >> s;
    n = s.size();

    vector<string> v;

    queue<string> q;
    for (int i = 0; i < n; i++)
    {
        string ss;
        ss.push_back(s[i]);

        q.push(ss);
    }

    while (!q.empty())
    {
        string x = q.front();
        q.pop();

        if (x.size() > n)
            break;

        v.push_back(x);

        for (auto x1 : s)
        {
            string ss;
            ss.push_back(x1);
            string y = x + ss;
            q.push(y);
        }
    }

    for (auto x : v)
        cout << x << endl;
}

int main()
{

#define LOCAL

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