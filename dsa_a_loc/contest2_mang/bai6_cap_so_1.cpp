#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n;
    int arr[1001];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> k;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}