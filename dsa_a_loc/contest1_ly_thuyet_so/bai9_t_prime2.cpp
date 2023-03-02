#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int prime[1000001];

void sieve()
{
    int n = 1000001;
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;

    for (int i = 2; i < sqrt(n); i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j < n; j += i)
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

    int count = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (prime[i])
            count++;
    }

    cout << count;
    return 0;
}