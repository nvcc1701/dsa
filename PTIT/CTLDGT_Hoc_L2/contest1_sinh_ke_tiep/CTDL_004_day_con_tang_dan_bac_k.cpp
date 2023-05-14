#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k1;
int a[101];

vector<int> tmp;
int res = 0;

void check()
{
    bool ok = true;
    for (int i = 0; i < tmp.size() - 1; i++)
    {
        if (tmp[i] > tmp[i + 1])
        {
            ok = false;
            break;
        }
    }
    if (ok)
        res++;
}

void Try(int cnt)
{
    for (int j = cnt; j < n; j++)
    {
        tmp.push_back(a[j]);
        if (tmp.size() <= k1)
        {
            if (tmp.size() == k1)
                check();
            else
                Try(j + 1);
        }
        tmp.pop_back();
    }
}

void run_case()
{
    cin >> n >> k1;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Try(0);
    cout << res;
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