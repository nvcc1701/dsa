#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> se;
    int x, n;
    cin >> n;
    while (n--)
    {
        cin >> x;
        se.insert(x);
    }

    cout << se.size();

    return 0;
}