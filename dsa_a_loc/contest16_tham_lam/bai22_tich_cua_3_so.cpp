#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void run_case()
{
    int n;
    cin >> n;

    set<int> d;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            d.insert(i);
            n /= i;
        }
    }

    if (n != 1)
        d.insert(n);

    if (d.size() >= 3)
    {
        cout << "YES";
    }
    else
        cout << "NO";

    // int x = 1, y = 1, z = 1;

    // for (int &u : d)
    // {
    //     if (x == 1)
    //         x *= u;
    //     else if (y == 1 || x == y)
    //         y *= u;
    //     else
    //         z *= u;
    // }

    // if (x == 1 || y == 1 || z == 1)
    // {
    //     cout << "NO\n";
    //     return;
    // }

    // if (x == y || x == z || y == z)
    // {
    //     cout << "NO\n";
    //     return;
    // }
    // cout << "YES\n";
}

int main()
{

#define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
    auto start = chrono::high_resolution_clock::now();
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

#ifdef LOCAL
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    auto startT = chrono::system_clock::to_time_t(start);
    cout << "\n\n" << ctime(&startT) << (double)duration.count() / 1000 << " seconds\n";
#endif

    return 0;
}