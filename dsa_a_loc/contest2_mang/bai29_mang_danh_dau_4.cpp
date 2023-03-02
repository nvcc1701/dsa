#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int n, a[1001], check[1000001];
    cin >> n;
    memset(check, 0, sizeof(check));

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        check[a[i]]++;
    }

    int max = 0;
    for (int i = 0; i < n; i++)
        if (check[a[i]] > check[a[max]])
        {
            max = i;
        }
        else if (check[a[i]] == check[a[max]] && a[i] < a[max])
        {
            max = i;
        }

    cout << a[max] << " " << check[a[max]];
    return 0;
}