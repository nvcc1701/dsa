#include <iostream>
#include <map>
#include <set>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    map<int, int> mp;
    set<int> se;
    while (n--)
    {
        cin >> x;
        // mp[x]++;
        se.insert(x);
    }

    if (n % se.size() == 0)
        cout << "YES";
    return 0;
}