#include <iostream>
using namespace std;

int isBigger(int a, int b, int c)
{
    if (b > a && b > c)
        return 1;
    return 0;
}

int main()
{
    int n, arr[1001];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n - 1; i++)
        if (isBigger(arr[i - 1], arr[i], arr[i + 1]))
            cout << arr[i] << " ";
}