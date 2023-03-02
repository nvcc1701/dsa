#include <iostream>
using namespace std;

using ll = long long;

bool isSphenic(ll n)
{
    int cnt = 0;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            int p = 0;
            while (n % i == 0)
            {
                p++;
                n /= i;
            }
            if (p > 1)
                return 0;
            if (p == 1)
                cnt++;
        }
    }

    if (n != 1)
        cnt++;

    return (cnt == 3);
}

int main()
{
    ll n;
    cin >> n;

    if (isSphenic(n))
        cout << 1;
    else
        cout << 0;
    return 0;
}