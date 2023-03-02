#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 100001;
int a[MAX];

void sieve()
{
    for (int i = 1; i < MAX; i++)
        a[i] = i;
    for (int i = 2; i * i <= MAX; i++)
        if (a[i] == i)
            for (int j = i * i; j <= MAX; j += i)
                if (a[j] == j)
                    a[j] = i;
}

int main()
{
    int n;
    cin >> n;

    sieve();
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}