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
    cin >> s;
    stack<string> stk;

    string res = "";
    for (int i = 0; i < s.size(); i++)
    {
        string x = string(1, s[i]);
        if (s[i] != ']')
            stk.push(x);
        else
        {
            string s = "";
            while (stk.top()[0] != '[')
            {
                s += stk.top();
                stk.pop();
            }
            stk.pop();
            reverse(s.begin(), s.end());
            int n1 = stoi(stk.top());
            stk.pop();
            while (n1 > 0)
            {
                s += s;
                n1--;
            }
            res += s;
        }
    }
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