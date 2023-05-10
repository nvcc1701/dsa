#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

ll n;
bool isValid(string x)
{
    if (stoll(x) <= n)
        return true;
    else
        return false;
}

void generate()
{
    queue<string> q;
    q.push("1");
    int cnt = 0;
    while (!q.empty())
    {
        string s = q.front();
        q.pop();

        if (s.size() > 19)
            break;
        if (!isValid(s))
            break;

        cnt++;

        q.push(s + "0");
        q.push(s + "1");
    }

    cout << cnt << endl;
}

void run_case()
{
    cin >> n;

    generate();
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