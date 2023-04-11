#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

string s;
void run_case()
{
    cin >> s;

    stack<char> stk;

    int res = 0, cnt = 0;
    for (auto c : s)
    {
        if (stk.size() == 0)
        {
            stk.push(c);
            cnt = 0;
        }
        else if (stk.top() == '[' && c == ']')
        {
            stk.pop();
            cnt += 2;
        }
        else if (stk.top() == ']' && c == '[')
        {
            res += stk.size() + cnt;
            stk.pop();
        }
        else if (stk.top() == '[' && c == '[')
            stk.push(c);
        else if (stk.top() == ']' && c == ']')
            stk.push(c);
    }

    cout << res << endl;
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