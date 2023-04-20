#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int f[10000 + 1];
void init()
{
    f[1] = 1;

    int curr;
    int i2 = 1, i3 = 1, i5 = 1;
    int number2 = 2, number3 = 3, number5 = 5;

    for (int i = 2; i <= 10000; i++)
    {
        curr = min({number2, number3, number5});
        f[i] = curr;
        if (curr == number2)
        {
            i2++;
            number2 = f[i2] * 2;
        }
        if (curr == number3)
        {
            i3++;
            number3 = f[i3] * 3;
        }
        if (curr == number5)
        {
            i5++;
            number5 = f[i5] * 5;
        }
    }
}

void run_case()
{
    int n;
    cin >> n;

    cout << f[n] << endl;
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
    init();
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}