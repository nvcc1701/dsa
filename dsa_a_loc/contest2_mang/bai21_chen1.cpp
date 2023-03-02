#include <iostream>
using namespace std;

int main()
{
    int n, k, x;
    cin >> n >> x >> k;

    int p;
    for (int i = 0; i < n; i++)
    {
        cin >> p;

        if ((i + 1) == k)
            cout << x << " ";
        cout << p << " ";
    }
    
    return 0;
}