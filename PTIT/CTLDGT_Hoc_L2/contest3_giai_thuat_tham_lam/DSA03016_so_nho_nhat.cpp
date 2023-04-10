#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int s, d;

int a[1001];
void run_case()
{
    cin >> s >> d;
    int n = d;
    memset(a, 0, sizeof(a));
    while (d > 0)
    {
        if (s <= 9)
        {
            if (d != 1)
            {
                a[d] = s - 1;
                a[1] = 1;
                s = 0;
                break;
            }
            else
            {
                a[d] = s;
                s = 0;
                break;
            }
        }
        else
        {
            a[d] = 9;
            s -= 9;
            d--;
        }
    }

    if (s > 0)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = 1; i <= n; i++)
        cout << a[i];
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