#include <iostream>
using namespace std;

int main()
{
    int t, n, x;
    cin >> t;
    int arr[1001];

    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    cin >> x;
    int cnt = 0;
    int cnt2 = 0;

    for (int i = 0; i < t; i++)
    {
        if (arr[i] > x)
            ++cnt;
        else if (arr[i] < x)
            cnt2++;
    }

    cout << cnt2 << endl;
    cout << cnt;

    return 0;
}