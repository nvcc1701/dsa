#include <iostream>
#include <cstring>

using namespace std;

int n = 10000000;
bool check[10000000 + 1];

void sieve()
{
    memset(check, true, sizeof(check));

    for (int i = 2; i <= n; i++)
    {
        if (check[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                check[j] = false;
            }
        }
    }
}

int main()
{
    int m;
    cin >> m;
    sieve();
    for (int i = 2; i <= m; i++)
    {
        if (check[i])
            cout << i << " ";
    }

    return 0;
}

//use memset