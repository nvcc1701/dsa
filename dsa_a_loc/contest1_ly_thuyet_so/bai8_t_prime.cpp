#include <cmath>
#include <iostream>
#include <cstring>
using namespace std;

bool prime[1000001];

void sieve()
{
    int m = 1000001;
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(m); i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= m; j += i)
            {
                prime[j] = false;
            }
        }
    }
}

int main()
{
    sieve();
    long long n;
    cin >> n;

    for (long long i = 1; i <= sqrt(n); i++)
    {
        if (prime[i])
            cout << i * i << " ";
    }

    return 0;
}