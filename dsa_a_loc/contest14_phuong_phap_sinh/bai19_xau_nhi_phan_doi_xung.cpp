#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int a[16];
int n;

void print()
{
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << endl;
}

bool check()
{
    int i = 1, j = n;
    while (i < j)
    {
        if (a[i] != a[j])
            return false;
        i++;
        j--;
    }
    return true;
}

void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n)
        {
            if (check())
                print();
        }
        else
        {
            Try(i + 1);
        }
    }
}

void run_case()
{
    cin >> n;
    Try(1);
}

int main()
{
#ifndef ONLINE_JUDGE
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