#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;
vector<string> res;
void check(string s)
{
    int cnt = 0;
    bool ok = false;
    for (auto x : s)
    {
        if (x == 'A') // AAABAAA
            cnt++;
        else
        {
            if (cnt == k)
            {
                if (!ok)
                    ok = true;
                else
                {
                    ok = false;
                    break;
                }
            }
            cnt = 0;
        }
    }

    if (ok || cnt == k)
        res.push_back(s);
}

void generate()
{
    queue<string> q;
    q.push("A");
    q.push("B");

    while (q.size())
    {
        string top = q.front();
        q.pop();
        if (top.size() > n)
            break;
        if (top.size() == n)
            check(top);

        q.push(top + "A");
        q.push(top + "B");
    }
}

void run_case()
{
    cin >> n >> k;
    generate();

    cout << res.size() << endl;
    for (auto x : res)
        cout << x << endl;
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
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}