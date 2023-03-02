#include <iostream>
using namespace std;

int main()
{

    int t, p;
    cin >> t;

    int min = 9999;
    int arr[1001];
    int cnt = 0;

    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];

        if (min > arr[i])
        {
            min = arr[i];
            cnt = 0;
        }

        if (min == arr[i])
            ++cnt;
    }

    cout << cnt;
}
