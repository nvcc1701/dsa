#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}

int main()
{
    int n, arr[1001];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int left = 0;
        int right = 0;

        for (int j = 0; j < i; j++)
            left += arr[j];

        for (int k = i + 1; k < n; k++)
            right += arr[k];

        if (isPrime(left) && isPrime(right))
        {
            cout << i << " ";
        }
    }

    return 0;
}