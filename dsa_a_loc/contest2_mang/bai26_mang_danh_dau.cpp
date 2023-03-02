#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int p, n, a[1000001];
    memset(a, false, sizeof(a));
    cin >> n;

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        if (!a[p])
        {
            a[p] = true;
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}