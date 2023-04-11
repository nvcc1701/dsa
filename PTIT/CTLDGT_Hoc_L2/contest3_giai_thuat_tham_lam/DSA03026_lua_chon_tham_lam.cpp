#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, kk;
int a[200];
void run_case()
{
    cin >> n >> kk;
    memset(a, 0, sizeof(a));

    if (kk == 0)
    {
        cout << -1 << " " << -1;
        return;
    }

    int k = kk;
    for (int i = n - 1; i >= 0; i--)
    {
        if (k <= 9)
        {
            if (i == 0)
            {
                a[0] = k;
                k = 0;
                break;
            }
            else
            {
                a[0] = 1;
                a[i] = k - 1;
                k = 0;
                break;
            }
        }
        else
        {
            a[i] = 9;
            k -= 9;
        }
    }

    if (k == 0)
    {
        for (int i = 0; i < n; i++)
            cout << a[i];
    }
    else
    {
        cout << -1;
    }

    cout << " ";

    memset(a, 0, sizeof(a));
    k = kk;
    for (int i = 0; i < n; i++)
    {
        if (k < 9)
        {
            a[i] = k;
            k = 0;
            break;
        }
        else
        {
            a[i] = 9;
            k -= 9;
        }
    }

    if (k == 0)
    {
        for (int i = 0; i < n; i++)
            cout << a[i];
    }
    else
    {
        cout << -1;
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
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}