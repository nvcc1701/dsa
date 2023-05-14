#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

ll n;

string s[1000];
void run_case()
{
    cin >> n;
    s[1] = "0";
    s[2] = "1";

    int mid = 2;
    for (int i = 2; i <= n; i++)
    {
        int k = pow(2, i);
        for (int j = 1; j <= mid; j++)
        {
            s[k - j + 1] = "1" + s[j];
            s[j] = "0" + s[j];
        }
        mid = k;
    }

    for (int i = 1; i <= pow(2, n); i++)
        cout << s[i] << " ";

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