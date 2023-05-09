#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int l, r;

vector<int> res;

bool check(string s)
{
    set<char> se;
    for (auto x : s)
    {
        if (se.count(x))
            return false;
        se.insert(x);
    }

    int n = stoi(s);
    if (n >= l && n <= r)
        return true;
    return false;
}

void generate()
{
    queue<string> q;
    for (int i = 1; i <= 5; i++)
    {
        q.push(to_string(i));
    }

    while (q.size() > 0)
    {
        string top = q.front();
        q.pop();

        int n = stoi(top);
        if (n > r)
            break;

        if (check(top))
            res.push_back(n);

        for (int i = 0; i <= 5; i++)
        {
            q.push(top + to_string(i));
        }
    }
}

void run_case()
{
    cin >> l >> r;
    res.clear();
    generate();
    // for (auto x : res)
    //     cout << x << " ";
    cout << res.size() << endl;
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
    cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}