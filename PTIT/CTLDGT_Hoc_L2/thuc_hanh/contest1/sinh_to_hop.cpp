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
    for (auto x : v)
        cout << x;
    cout << " ";
}

void Try(int start)
{
    for (int j = start; j <= n; j++)
    {
        v.push_back(j);
        if (v.size() == k)
            print();
        else
            Try(j + 1);
        v.pop_back();
    }
}

void run_case()
{
    cin >> n >> k;
    Try(1);
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