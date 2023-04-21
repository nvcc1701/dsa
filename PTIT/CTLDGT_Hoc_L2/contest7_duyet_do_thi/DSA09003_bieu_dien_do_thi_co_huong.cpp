#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void run_case()
{
    int v, e;
    cin >> v >> e;
    vector<int> a[v + 1];

    int x, y;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        a[x].push_back(y);
    }

    for (int i = 1; i <= v; i++)
    {
        cout << i << ": ";
        for (auto x : a[i])
            cout << x << " ";
        cout << endl;
    }
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