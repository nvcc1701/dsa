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
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int res[n + 1];

    stack<int> stk;
    for (int i = n; i >= 1; i--)
    {
        if (stk.empty())
            stk.push(i);
        else
        {
            while (stk.size() && a[i] > a[stk.top()])
            {
                int x = stk.top();
                stk.pop();
                res[x] = x - i;
            }
            stk.push(i);
        }
    }

    while (stk.size())
    {
        res[stk.top()] = stk.top();
        stk.pop();
    }

    for (int i = 1; i <= n; i++)
        cout << res[i] << " ";
    cout << endl;
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