#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

const ll MOD = 1000000007;

ll legendre(ll n, ll p)
{
    ll cnt = 0;
    ll pp = p;
    while (p <= n)
    {
        // n /= p;
        // cnt = (cnt % MOD + n % MOD) % MOD;
        cnt += (n / p) % MOD;
        cnt %= MOD;
        p *= pp;
    }
    return cnt;
}

int main()
{
    ll n;
    cin >> n;
    cout << legendre(n, 5);
    return 0;
}

// legrendre fomula
//  cnt_p = n/p + n/p**2 + ....
