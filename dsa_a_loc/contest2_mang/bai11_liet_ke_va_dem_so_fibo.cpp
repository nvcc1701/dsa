#include <iostream>
#include <cmath>
using namespace std;

long long fibo[93];

void fibogen()
{
    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i <= 92; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}

int main()
{
    fibogen();
    int n;
    long long x;
    cin >> n;

    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        for (int j = 0; j < sizeof(fibo)/sizeof(fibo[0]); j++)
        {
            if (x == fibo[j])
            {
                cout << x << ' ';
                flag = true;
                break;
            }
        }
    }

    if (!flag)
    {
        cout << "NONE";
    }

    return 0;
}