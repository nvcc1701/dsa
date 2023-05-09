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

void run_case()
{
    cin >> s;
    stack<int> stk;
    for (auto x : s)
    {
        if (x == '(' || x == '{' || x == '[')
            stk.push(x);
        else
        {
            if (stk.empty())
            {
                cout << "NO\n";
                return;
            }
            else
            {
                if ((stk.top() == '(' && x == ')') || (stk.top() == '[' && x == ']') || (stk.top() == '{' && x == '}'))
                {
                    stk.pop();
                }
                else
                {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    if (stk.size() > 0)
        cout << "NO\n";
    else
        cout << "YES\n";
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