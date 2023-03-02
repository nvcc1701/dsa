#include <iostream>
using namespace std;

int main()
{
    int n, x, arr[1001];
    cin >> n >> x;

    int flag = 0;
    int pos = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == x && !flag)
        {
            pos = i;
            flag = 1;
        }
    }

    if (!flag)
    {
        cout << "NOT FOUND";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i != pos)
            {
                cout << arr[i] << " ";
            }
        }
    }
    return 0;
}