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
    getline(cin, s);

    stack<char> stk;

    for (auto x : s)
    {
        if (x != ')')
            stk.push(x);
        else
        {
            bool ok = false;
            while (stk.top() != '(')
            {
                if (stk.top() == '+' || stk.top() == '-' || stk.top() == '*' || stk.top() == '/')
                    ok = true;
                stk.pop();
            }
            stk.pop();

            if (ok == false)
            {
                cout << "YES\n";
                return;
            }
        }
    }

    cout << "NO";
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