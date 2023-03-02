#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool ok = false;
    if (n == 0 || n == 1)
    {
        ok = true;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ok = true;
            break;
        }
    }

    if (ok)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}