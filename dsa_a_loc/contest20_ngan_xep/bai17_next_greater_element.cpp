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
    vector<int> v(n);
    int res[n];

    memset(res, -1, sizeof(res));

    for (auto &x : v)
        cin >> x;

    stack<int> stk;
    for (int i = 0; i < n; i++)
    {
        if (stk.empty())
        {
            stk.push(i);
        }
        else
        {
            if (v[i] <= v[stk.top()])
                stk.push(i);
            else
            {
                while (!stk.empty() && v[i] > v[stk.top()])
                {
                    res[stk.top()] = v[i];
                    stk.pop();
                }
                stk.push(i);
            }
        }
    }

    for (auto x : res)
        cout << x << " ";
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