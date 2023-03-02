#include <iostream>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;

int main()
{

    int t, p, e;
    cin >> t;

    ll res = 1;
    while (t--)
    {
        cin >> p >> e;
        res = (res % MOD * (e + 1) % MOD) % MOD;
    }
    cout << res;
    return 0;
}