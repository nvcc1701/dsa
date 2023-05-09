#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n1, n2;

int calc(char x)
{
    if (x == '+')
    {
        return n1 + n2;
    }
    else if (x == '-')
    {
        return n1 - n2;
    }
    else if (x == '/')
    {
        return n1 / n2;
    }
    else if (x == '*')
    {
        return n1 * n2;
    }
    else
        return pow(n1, n2);
}

void run_case()
{
    string s;
    getline(cin, s);

    stack<int> stk;

    for (auto x : s)
    {
        if (isdigit(x))
            stk.push(stoi(string(1, x)));
        else
        {
            n2 = stk.top();
            stk.pop();
            n1 = stk.top();
            stk.pop();

            stk.push(calc(x));
        }
    }

    cout << stk.top();
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