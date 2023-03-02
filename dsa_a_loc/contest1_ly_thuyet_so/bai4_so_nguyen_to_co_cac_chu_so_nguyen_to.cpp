#include <iostream>
using namespace std;

bool isPrime(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return x > 1;
}

bool check(int x)
{
    int a = x;
    while (x)
    {
        int tmp = x % 10;
        if (tmp != 2 && tmp != 3 && tmp != 5 && tmp != 7)
            return 0;
        x /= 10;
    }

    if (isPrime(a))
        return 1;
    return 0;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for (int i = a; i <= b; i++)
    {
        if (check(i))
            cnt++;
    }

    cout << cnt;
    return 0;
}