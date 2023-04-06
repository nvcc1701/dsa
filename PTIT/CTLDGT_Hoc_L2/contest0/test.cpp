#include <iostream>
#include <math.h>

using namespace std;

void tsnt(int n)
{
    int k = 0;
    while (n % 2 == 0)
    {
        n = n / 2;
        k++;
    }
    cout << 2 << "(" << k << ")"
         << " ";

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        if (n % i == 0)
        {
            int j = 0;
            while (n % i == 0)
            {
                n = n / i;
                j++;
            }
            cout << i << "(" << j << ")"
                 << " ";
        }
    }

    if (n > 2)
        cout << n << "(1)";
}

int main()
{
#define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        tsnt(a);
        cout << endl;
    }
}