#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e4 + 5;

int a[MAX];
int n;

bool isBST()
{
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] >= a[i])
            return false;
    }
    return true;
}

void run_case()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (isBST())
        cout << "1\n";
    else
        cout << "0\n";
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