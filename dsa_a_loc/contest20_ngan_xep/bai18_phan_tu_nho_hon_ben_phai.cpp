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
    int a[n], res[n], res2[n];
    for (auto &x : a)
        cin >> x;

    memset(res, -1, sizeof(res));
    memset(res2, -1, sizeof(res2));

    stack<int> stk;
    for (int i = 0; i < n; i++)
    {
        if (stk.empty())
        {
            stk.push(i);
        }
        else
        {
            if (a[i] <= a[stk.top()])
                stk.push(i);
            else
            {
                while (!stk.empty() && a[i] > a[stk.top()])
                {
                    res[stk.top()] = i;
                    stk.pop();
                }
                stk.push(i);
            }
        }
    }

    stack<int> stk2;
    for (int i = 0; i < n; i++)
    {
        if (stk2.empty())
        {
            stk2.push(i);
        }
        else
        {
            if (a[i] >= a[stk2.top()])
                stk2.push(i);
            else
            {
                while (!stk2.empty() && a[i] < a[stk2.top()])
                {
                    res2[stk2.top()] = a[i];
                    stk2.pop();
                }
                stk2.push(i);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (res[i] == -1)
            cout << -1 << " ";
        else
            cout << res2[res[i]] << " ";
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