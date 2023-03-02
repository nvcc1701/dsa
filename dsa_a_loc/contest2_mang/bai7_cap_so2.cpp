#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, arr[1001];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min = 9999;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(arr[i] - arr[j]) < min)
                min = abs(arr[i] - arr[j]);
        }
    }

    cout << min;
    return 0;
}