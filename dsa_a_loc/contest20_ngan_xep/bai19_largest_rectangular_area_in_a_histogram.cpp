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
    int n;
    cin >> n;
    int a[n], res[n];
    for (auto &x : a)
        cin >> x;

    stack<int> stk;
    stk.push(0);
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[stk.top()])
        {
            res[stk.top()] = a[stk.top()] * (i - stk.top());
            stk.pop();
            stk.push(i);
        }
        else
        {

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