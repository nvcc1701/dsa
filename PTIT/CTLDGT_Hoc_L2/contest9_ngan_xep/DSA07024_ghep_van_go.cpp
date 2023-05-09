#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

ll caculate(ll x, ll y)
{
    if (x <= y)
        return x;
    return 0;
}

void run_case()
{
    int n;
    cin >> n;
    ll h[n];
    ll res[n];
    for (auto &x : h)
        cin >> x;

    stack<ll> stk;

    int i;
    for (i = 0; i < n; i++)
    {
        if (stk.empty())
            stk.push(i);
        else
        {
            while (stk.size() && h[i] < h[stk.top()])
            {
                ll x = stk.top();
                stk.pop();

                if (stk.size() == 0)
                    res[x] = caculate(h[x], i);
                else
                    res[x] = caculate(h[x], (i - stk.top() - 1));
            }
            stk.push(i);
        }
    }

    while (stk.size())
    {
        ll x = stk.top();
        stk.pop();

        if (stk.size() == 0)
            res[x] = caculate(h[x], i);
        else
            res[x] = caculate(h[x], (i - stk.top() - 1));
    }

    cout << *max_element(res, res + n) << endl;
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