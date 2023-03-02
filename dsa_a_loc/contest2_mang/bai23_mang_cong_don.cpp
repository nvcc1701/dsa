#include <iostream>
using namespace std;

int main()
{
    int n, f[1001], a[1001];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    f[0] = a[0];
    cout << f[0] << " ";
    for (int i = 1; i < n; i++)
    {
        f[i] = f[i - 1] + a[i];
        cout << f[i] << " ";
    }

    return 0;
}