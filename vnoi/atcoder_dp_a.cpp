#include <bits/stdc++.h>
using namespace std;

const int MAX = 2e5 + 5;

int n;
int h[MAX];
int f[MAX];

void run_case()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> h[i];

    f[1] = 0;
    f[2] = abs(h[1] - h[2]);

    for (int i = 3; i <= n; i++)
    {
        f[i] = min(f[i - 1] + abs(h[i - 1] - h[i]), f[i - 2] + abs(h[i - 2] - h[i]));
    }

    cout << f[n];
}

int main()
{
#define LOCAL

#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int Test = 1;
    // cin >> Test;
    for (int test = 0; test < Test; test++)
    {
        run_case();
    }

    return 0;
}