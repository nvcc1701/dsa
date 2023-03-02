#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, x, q, y;
    cin >> n;
    map<int, int> mp;

    while (n--)
    {
        cin >> x;
        mp[x]++;
    }

    cin >> q;
    while (q--)
    {
        cin >> x;
        cin >> y;
        if (x == 1)
        {
            mp[y]++;
        }
        else if (x == 2)
        {
            if (mp[y] > 0)
                mp[y]--;
        }
        else
        {
            if (mp[y])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}