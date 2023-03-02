#include <iostream>
#include <cmath>
using namespace std;

int isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int isDigitPrime(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int tmp = n % 10;
        if (tmp != 2 && tmp != 3 && tmp != 5 && tmp != 7)
            return 0;
        sum += tmp;
        n /= 10;
    }

    if (!isPrime(sum))
        return 0;
    return 1;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = a; i <= b; i++)
    {
        if (isDigitPrime(i) && isPrime(i))
            ++count;
    }
    cout << count;
    return 0;
}