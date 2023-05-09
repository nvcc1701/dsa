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

    vector<string> res;

    queue<string> q;
    q.push("6");
    q.push("8");

    while (true)
    {
        string s = q.front();
        q.pop();
        if (s.size() > n)
            break;

        res.push_back(s);

        q.push(s + "6");
        q.push(s + "8");
    }

    cout << res.size() << endl;
    for (auto it = res.begin(); it != res.end(); it++)
    {
        cout << *it << " ";
    }
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