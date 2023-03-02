#include <iostream>
#include <set>
#include <map>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    map<int, int> mp;
    while (n--)
    {
        cin >> x;
        mp[x]++;
        if (mp[x] == 1)
            cout << x << " ";
    }

    return 0;
}