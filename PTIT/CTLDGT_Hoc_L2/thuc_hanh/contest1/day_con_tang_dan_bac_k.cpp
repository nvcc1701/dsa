#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;
int a[101];
int cnt = 0;
vector<int> v;

void Try(int start)
{
    for (int j = start; j <= n; j++)
    {
        if (a[j] > v.back())
        {
            v.push_back(a[j]);
            if (v.size() == k + 1)
                cnt++;
            else
                Try(j + 1);
            v.pop_back();
        }
    }
}

void run_case()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    v.push_back(-1);
    Try(1);
    cout << cnt << endl;
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