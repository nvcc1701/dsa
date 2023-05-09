#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int Rank(char x)
{
    if (x == '^')
        return 3;
    else if (x == '*' || x == '/')
        return 2;
    else if (x == '+' || x == '-')
        return 1;
    else
        return 0;
}

void run_case()
{
    string s;
    getline(cin, s);

    string res = "";
    stack<char> stk;
    for (auto x : s)
    {
        if (isalpha(x))
            res += x;
        else
        {
            if (x == '(')
                stk.push(x);
            else if (x == ')')
            {
                while (stk.top() != '(')
                {
                    res += stk.top();
                    stk.pop();
                }
                stk.pop();
            }
            else
            {
                while (!stk.empty() && (Rank(stk.top()) >= Rank(x)))
                {
                    res += stk.top();
                    stk.pop();
                }
                stk.push(x);
            }
        }
    }

    while (stk.size() > 0)
    {
        res += stk.top();
        stk.pop();
    }

    cout << res;
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