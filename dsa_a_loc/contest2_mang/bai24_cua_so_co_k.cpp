#include <iostream>
using namespace std;

int main()
{
    int n, k, a[1001];
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        int nn = i + k;
        int sum = 0;

        for (int j = i; j < nn; j++)
        {
            sum += a[j];
        }
        cout << sum << " ";
        if (nn == n)
            break;
    }
    return 0;
}