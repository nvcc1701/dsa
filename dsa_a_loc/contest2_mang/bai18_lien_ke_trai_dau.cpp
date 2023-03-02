#include <iostream>
using namespace std;

int check(int a, int b)
{
    return ((long long) a * b) < 0;
}

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        if ((i == 0) && check(a[i], a[i + 1]))
            cout << a[i] << " ";
        else if ((i == n - 1) && check(a[i - 1], a[i]))
            cout << a[i] << " ";
        else
        {
            if (check(a[i - 1], a[i]) || check(a[i], a[i + 1]))
                cout << a[i] << " ";
        }
    }

    return 0;
}
