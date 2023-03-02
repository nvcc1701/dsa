#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, p, check[1001];
    cin >> n;
    memset(check, false, sizeof(check));

    for (int i = 0; i < n; i++)
    {
        cin >> p;
        if (!check[p])
        {
            cout << p << " ";
            check[p] = true;
        }
    }
    return 0;
}