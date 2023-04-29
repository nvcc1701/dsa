#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
int c[10];

vector<int> v;

void print()
{
    for (auto x : v)
        cout << x;
    cout << " ";
}

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (c[j] == false)
        {
            v.push_back(j);
            c[j] = true;
            if (v.size() == n)
                print();
            else
                Try(i + 1);
            v.pop_back();
            c[j] = false;
        }
    }
}

void run_case()
{
    cin >> n;
    memset(c, false, sizeof(c));
    Try(99);
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