#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 100000 + 5;

int n, m, k;

void run_case()
{
    cin >> n >> m >> k;

    vector<int> v1;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v1.push_back(x);
    }

    multiset<int> se1;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        se1.insert(x);
    }

    vector<int> v2;
    for (auto x : v1)
    {
        if (se1.count(x) != 0)
        {
            v2.push_back(x);
            se1.erase(se1.find(x));
        }
    }

    multiset<int> se2;
    for (int i = 0; i < k; i++)
    {
        cin >> x;
        se2.insert(x);
    }

    bool ok = false;
    for (auto x : v2)
    {
        if (se2.count(x) != 0)
        {
            ok = true;
            cout << x << " ";
            se2.erase(se2.find(x));
        }
    }

    if (!ok)
        cout << "NO";
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