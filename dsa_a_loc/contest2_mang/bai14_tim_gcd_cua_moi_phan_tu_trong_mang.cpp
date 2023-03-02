#include <iostream>
using namespace std;

int ucln(int a, int b)
{
    while (a * b != 0)
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }
    return a + b;
}

int main()
{
    int n, x, first, second;
    cin >> n >> first >> second;
    int res = ucln(first, second);

    for (int i = 0; i < n - 2; i++)
    {
        cin >> x;
        res = ucln(res, x);
    }

    cout << res;
    return 0;
}