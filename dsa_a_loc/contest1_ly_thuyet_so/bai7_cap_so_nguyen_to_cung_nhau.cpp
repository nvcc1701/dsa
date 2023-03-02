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
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        for (int j = i + 1; j <= b; j++)
        {
            if (ucln(i, j) == 1)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
}