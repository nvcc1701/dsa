#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
vector<pair<int, int>> v;

void factorize() // O(N)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                n /= i;
                cnt++;
            }
            v.push_back({i, cnt});
        }
    }

    if (n != 1)
        v.push_back({n, 1});
}

void run_case()
{
    cin >> n;
    factorize();

    for (auto x : v)
    {
        cout << x.first << "(" << x.second << ") ";
    }
    cout << endl;

    v.clear();
}

int main()
{

#define LOCAL

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
        cout << "Test " << test << ": ";
        run_case();
    }

    return 0;
}