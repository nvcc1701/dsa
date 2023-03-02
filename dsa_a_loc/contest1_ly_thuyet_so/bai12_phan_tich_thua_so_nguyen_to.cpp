#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        int cnt = 0;
        while (n % i == 0)
        {
            cnt++;
            n /= i;
        }
        if (cnt != 0 && n != 1)
            cout << i << "^" << cnt << " * ";
        if (n == 1)
            cout << i << "^" << cnt;
    }
    if (n != 1)
        cout << n << "^" << 1;
    return 0;
}