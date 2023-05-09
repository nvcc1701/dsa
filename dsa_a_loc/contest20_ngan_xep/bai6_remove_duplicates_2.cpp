#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int counts[127];

void run_case()
{
    string s;
    getline(cin, s);
    stack<char> stk;

    int k;
    cin >> k;

    for (auto x : s)
    {
        if (stk.empty())
        {
            stk.push(x);
            counts[x]++;
        }
        else
        {
            if (stk.top() == x)
            {
                if (counts[x] == k - 1)
                {
                    while (!stk.empty() && stk.top() == x)
                        stk.pop();
                }
                else
                {
                    stk.push(x);
                    counts[x]++;
                }
            }
            else
            {
                stk.push(x);
                counts[x] = 1;
            }
        }
    }

    if (stk.size() == 0)
    {
        cout << "EMPTY";
        return;
    }

    vector<char> res;
    while (!stk.empty())
    {
        res.push_back(stk.top());
        stk.pop();
    }

    for (int i = res.size() - 1; i >= 0; i--)
        cout << res[i];
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