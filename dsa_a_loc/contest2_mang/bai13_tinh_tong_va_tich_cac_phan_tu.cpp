#include <iostream>
using namespace std;

long long mod = 1e9 + 7;

int main()
{
    int n, x, tong, tich;
    cin >> n;

    tong = 0;
    tich = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        tong = tong % mod + x % mod;
        tich = tich % mod * x % mod;
    }

    cout << tong << endl;
    cout << tich << endl;
    return 0;
}