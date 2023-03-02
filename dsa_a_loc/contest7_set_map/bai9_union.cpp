#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n, m, x;
    cin >> n >> m;
    n += m;
    set<int> se;
    while (n--)
    {
        cin >> x;
        se.insert(x);
    }

    for (auto it = se.rbegin(); it != se.rend(); ++it)
        cout << *it << " ";
    return 0;
}