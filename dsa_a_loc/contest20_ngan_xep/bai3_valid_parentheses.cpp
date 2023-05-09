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
    stack<char> stk;
    string s;
    getline(cin, s);

    for (auto x : s)
    {
        if (x == '(' || x == '[' || x == '{')
            stk.push(x);
        else
        {
            if (!stk.empty())
            {
                char top = stk.top();
                if ((top == '(' && x == ')') || (top == '[' && x == ']') || (top == '{' && x == '}'))
                    stk.pop();
                else
                {
                    cout << "NO\n";
                    return;
                }
            }
            else
            {
                cout << "NO\n";
                return;
            }
        }
    }

    if (stk.size() == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
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