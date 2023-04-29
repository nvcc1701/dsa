#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;
vector<int> v;

void print()
{
    int cnt = 0;
    for (auto x : v)
    {
        if (x)
            cnt++;
    }

    if (cnt == k)
    {
        for (auto x : v)
            cout << x;

        cout << endl;
    }
}

void Try()
{
    for (int j = 0; j <= 1; j++)
    {
        v.push_back(j);
        if (v.size() == n)
            print();
        else
            Try();
        v.pop_back();
    }
}

void run_case()
{
    cin >> n >> k;
    Try();
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