#include <iostream>
#include <cstring>

using namespace std;

int m = 1000000;
bool check[1000000 + 1];

void sieve()
{
    memset(check, true, sizeof(check));
    check[0] = false;
    check[1] = false;

    for (int i = 2; i <= m; i++)
    {
        if (check[i])
        {
            for (int j = i * 2; j <= m; j += i)
            {
                check[j] = false;
            }
        }
    }
}

int main()
{
    int t, n;
    cin >> t;

    sieve();
    while (t-- > 0)
    {
        cin >> n;
        bool check2[n + 1];
        memset(check2, false, sizeof(check2));

        for (int i = 2; i <= n; i++)
        {
            if (!check2[i] && check[i] && check[n - i])
            {
                check2[i] = true;
                check2[n - i] = true;

                cout << i << " " << n - i << endl;
            }
        }
    }
}