#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;

bool isValid(string s)
{
    if (s.empty())
        return false;

    for (auto x : s)
        n += (x - '0');
    return n % 3;
}

void run_case()
{
    cin >> n;
    string s;
    cin >> s;

    queue<string> q;

    string res = "";

    q.push("0");
    q.push("1");
    while (!q.empty())
    {
        string top = q.front();
        q.pop();

        if (top.size() > n)
            break;

        string n1 = "";
        for (int i = 0; i < top.size(); i++)
        {
            int x = top[i] - '0';
            if (x)
                n1 += s[i];
        }

        if (isValid(n1))
            res = max(res, top);

        q.push(top + "0");
        q.push(top + "1");
    }
    
    cout << res << endl;
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