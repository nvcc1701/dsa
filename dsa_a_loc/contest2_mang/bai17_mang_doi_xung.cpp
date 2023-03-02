#include <iostream>
using namespace std;

int main()
{
    int n, arr[1000000 + 1], pivot;
    cin >> n;
    pivot = (n + 1) / 2;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int flag = 1;
    if (n % 2 == 0)
    {
        int l = 0;
        int r = n - 1;
        while (l++ < pivot && r-- >= pivot)
        {
            if (arr[l] - arr[r] != 0)
            {
                flag = 0;
                break;
            }
        }
    }
    else
    {
        int l = 0;
        int r = n - 1;
        while (l++ < pivot && r-- > pivot)
        {
            if (arr[l] - arr[r] != 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

// 1 2 1 2 1
// 0 1 2 3 4
// 1 2 2 1
// 0 1 2 3

// 5 / 2
// 0 1 2 3
// 0-3 1-2