#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, x, y, z;
    cin >> n;
    vector<pair<pair<int, int>, int>> v;
    while (n--)
    {
        cin >> x >> y >> z;
        v.push_back(make_pair(make_pair(x, y), z));
    }

    for (auto it : v)
        cout << it.first.first + it.first.second + it.second << " ";

    return 0;
}