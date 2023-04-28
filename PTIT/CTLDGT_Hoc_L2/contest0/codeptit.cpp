#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long F[93];
    F[1] = F[2] = 1;
    for (int j = 3; j < 93; j++)
    {
        F[j] = F[j - 1] + F[j - 2];
    }
    int t;
    cin >> t;
    while (t--)
    {
        long long n, i;
        cin >> n >> i;
        while (n > 2)
        {
            if (i <= F[n - 2])
                n -= 2;
            else
            {
                i -= F[n - 2];
                n -= 1;
            }
        }
        if (n == 1)
            cout << "A";
        else
            cout << "B";
        cout << "\n";
    }
}