#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> se;
    int x, n, q;
    cin >> n;
    while (n--)
    {
        cin >> x;
        se.insert(x);
    }
    cin >> q;

    while (q--)
    {
        cin >> x;
        if (se.count(x))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}