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
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll res[n];
    stack<ll> stk;
    int i;
    for (i = 0; i < n; i++)
    {
        if (stk.empty())
            stk.push(i);
        else
        {
            while (!stk.empty() && a[i] < a[stk.top()])
            {
                ll top = stk.top();
                stk.pop();
                if (stk.empty())
                    res[top] = a[top] * (i);
                else
                    res[top] = a[top] * (i - stk.top() - 1);
            }
            stk.push(i);
        }
    }

    while (!stk.empty())
    {
        ll top = stk.top();
        stk.pop();
        if (stk.empty())
            res[top] = a[top] * (i);
        else
            res[top] = a[top] * (i - stk.top() - 1);
    }

    cout << *max_element(res, res + n);
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