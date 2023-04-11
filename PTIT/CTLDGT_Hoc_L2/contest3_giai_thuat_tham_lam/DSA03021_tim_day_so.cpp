#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;

bool check(vector<int> a, int n)
{
    for (auto x : a)
        if (x / n == x / (n + 1))
            return false;

    return true;
}

void run_case()
{
    cin >> n;
    vector<int> a(n), c;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    c = a;

    ll min = *min_element(a.begin(), a.end());
    int i;
    for (i = min; i > 0; i--)
        if (check(a, i))
            break;

    int sum = 0;
    for (int j = 0; j < n; j++)
    {
        c[j] = a[j] / (i + 1) + 1;
        sum += c[j];
    }
    cout << sum;
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