#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int min = INT_MAX, max = INT_MIN, p_min = 0, p_max = 0;

    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > max)
        {
            max = x;
            p_max = i;
        }

        if (x <= min)
        {
            min = x;
            p_min = i;
        }
    }

    cout << p_min << " " << p_max;
    return 0;
}