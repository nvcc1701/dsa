#include <iostream>
#include <cstring>
#include <cmath>
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

bool isReversible(int n)
{
    int tmp = n;
    int sum = 0;
    while (tmp != 0)
    {
        sum = sum * 10 + tmp % 10;
        tmp /= 10;
    }

    if (sum == n)
        return true;
    return false;
}

bool isSquare(int n)
{
    if (sqrt(n) - (int)sqrt(n) == 0)
        return true;
    return false;
}

bool isSumPrime(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return prime[sum];
}

int main()
{
    sieve();
    int n, x;
    cin >> n;
    int cnt1, cnt2, cnt3, cnt4;
    cnt1 = cnt2 = cnt3 = cnt4 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (prime[x])
            cnt1++;
        if (isReversible(x))
            cnt2++;
        if (isSquare(x))
            cnt3++;
        if (isSumPrime(x))
            cnt4++;
    }

    cout << cnt1 << endl;
    cout << cnt2 << endl;
    cout << cnt3 << endl;
    cout << cnt4 << endl;

    return 0;
}