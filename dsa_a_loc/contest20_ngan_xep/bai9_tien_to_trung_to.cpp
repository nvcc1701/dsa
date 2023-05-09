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

    stack<string> stk;

    for (int i = s.size() - 1; i >= 0; i--)
    {
        string x = string(1, s[i]);

        if (isalpha(x[0]))
        {
            stk.push(x);
        }
        else
        {
            string s;
            string n1 = stk.top();
            stk.pop();
            string n2 = stk.top();
            stk.pop();

            s = "(" + n1 + x + n2 + ")";
            stk.push(s);
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