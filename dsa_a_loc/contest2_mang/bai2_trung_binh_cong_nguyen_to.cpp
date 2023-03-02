#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>

using namespace std;

bool prime[10001];
void sieve()
{
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(10001); i++)
    {
        if (prime[i])
            for (int j = i * i; j <= 10001; j += i)
            {
                prime[j] = false;
            }
    }
}

int main()
{
    sieve();
    int n, p, sum, count;
    cin >> n;

    sum = count = 0;
    while (n--)
    {
        cin >> p;
        if (prime[p] && p > 0)
        {
            ++count;
            sum += p;
        }
    }
  

    cout << fixed << setprecision(3) << (double)sum / count;
    return 0;
}