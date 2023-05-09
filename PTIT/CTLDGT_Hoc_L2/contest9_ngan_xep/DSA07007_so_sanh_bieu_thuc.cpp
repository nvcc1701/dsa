#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

string remove(string s)
{
    stack<char> stk;

    for (auto x : s)
    {
        if (x == ')')
        {
            string tmp = "";
            while (stk.top() != '(')
            {
                tmp = stk.top() + tmp;
                stk.pop();
            }
            stk.pop();

            char c = '+';
            if (stk.size())
                c = stk.top();

            for (auto x1 : tmp)
            {
                if (c == '-')
                {
                    if (x1 == '+')
                        stk.push('-');
                    else if (x1 == '-')
                        stk.push('+');
                    else
                        stk.push(x1);
                }
                else
                    stk.push(x1);
            }
        }
        else
            stk.push(x);
    }

    string res = "";
    while (stk.size())
    {
        res = stk.top() + res;
        stk.pop();
    }
    return res;
}

void run_case()
{
    string s1, s2;
    cin >> s1 >> s2;

    if (remove(s1) == remove(s2))
        cout << "YES\n";
    else
        cout << "NO\n";
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