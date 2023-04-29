#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
int a[101];
int sum;
bool ok;

int tmp = 0;
void Try(int start)
{
    for (int j = start; j <= n && !ok; j++)
    {
        tmp += a[j];
        if (tmp == sum)
        {
            ok = true;
            return;
        }
        else if (tmp < sum)
        {
            Try(j + 1);
        }
        tmp -= a[j];
    }
}

void run_case()
{
    cin >> n;
    sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if (sum % 2)
        cout << "NO\n";
    else
    {
        sum /= 2;
        ok = false;
        Try(1);
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
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