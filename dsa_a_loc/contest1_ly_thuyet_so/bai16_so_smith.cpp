#include <iostream>
using namespace std;

bool isSmith(int n)
{
    int sum1 = 0;
    int sum2 = 0;
    int x = n;

    while (x)
    {
        sum1 += x % 10;
        x /= 10;
    }

    for (int i = 2; i * i < n; i++)
    {
        while (n % i == 0)
        {
            sum2 += i;
            n /= i;
        }
    }

    if (n != 1)
        sum2 += n;

    return (sum1 == sum2);
}

bool isPrime(int n)
{
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;

    if (isSmith(n) && !isPrime(n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}