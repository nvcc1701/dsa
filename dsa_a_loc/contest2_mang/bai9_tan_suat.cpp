#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, arr[1001], check[1001], check2[1001];
    memset(check, 0, sizeof(check));
    memset(check2, 0, sizeof(check2));

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ++check[arr[i]];
    }

    for (int i = 0; i < n; i++)
    {
        if (check2[arr[i]] == 0)
        {
            cout << arr[i] << " " << check[arr[i]] << endl;
            check2[arr[i]] = 1;
        }
    }

    return 0;
}