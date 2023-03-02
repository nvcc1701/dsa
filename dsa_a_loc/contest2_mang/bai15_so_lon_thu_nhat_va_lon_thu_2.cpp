#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n, x;
    cin >> n;

    int max1 = INT_MIN;
    int max2 = INT_MIN + 1;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x >= max1)
        {
            max2 = max1;
            max1 = x;
        }
        else
        {
            if (x >= max2)
            {
                max2 = x;
            }
        }
    }

    cout << max1 << " " << max2;

    return 0;
}

// 1 2 10 3
// max1 = 1
// max2 = -999
// max1 = 2
// max2 = 1
// max1 = 10
// max
// 1 10 2 3