#include <iostream>
using namespace std;

int main()
{
    int arr[1001], n;
    int flag = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i % 2 == 0 && arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
            flag = 1;
        }
    }

    if (!flag)
        cout << "NONE";

    return 0;
}