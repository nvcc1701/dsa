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
    int n;
    cin >> n;
    double a[n + 1];
    double b[n + 1];

    for (int i = 1; i <= n; i++)
        cin >> a[i] >> b[i];

    int f1[n + 1];
    memset(f1, 0, sizeof(f1));
    // f1[1] = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j < i; j++)
    //     {
    //         if (a[i] > a[j])
    //             f1[i] = max(f1[i], f1[j] + 1);
    //     }
    // }

    // int f2[n + 1];
    // memset(f2, 0, sizeof(f2));
    // f2[1] = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j < i; j++)
    //     {
    //         if (b[i] < b[j])
    //             f2[i] = max(f2[i], f2[j] + 1);
    //     }
    // }

    // cout << min(*max_element(f1 + 1, f1 + n + 1), *max_element(f2 + 1, f2 + n + 1)) << endl;

    for (int i = 1; i <= n; i++)
    {
        f1[i] = 1;
        for (int j = 1; j < i; j++)
        {
            if (a[i] > a[j] && b[i] < b[j])
                f1[i] = max(f1[i], f1[j] + 1);
        }
    }

    cout << *max_element(f1 + 1, f1 + 1 + n) << endl;
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