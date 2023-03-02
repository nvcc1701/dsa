#include <iostream>
using namespace std;
using ll = long long;
int main()
{
    ll n;
    ll p;
    cin >> n >> p;
    ll cnt = 0;
    ll tmp = p;
    while (p <= n)
    {
        cnt += (n / p);
        p *= tmp;
    }
    cout << cnt;
    return 0;
}