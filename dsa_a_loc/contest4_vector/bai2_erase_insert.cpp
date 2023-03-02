#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int m, x, n;
    cin >> m;
    vector<int> v(m);

    for (int i = 0; i < m; i++)
        cin >> v[i];

    while (n--)
    {
        cin >> x;
        if (x == 1)
        {
            int i, j;
            cin >> i >> j;
            v.insert(v.begin() + i, j);
        }
        else
        {
            int i;
            cin >> i;
            v.erase(v.begin() + i);
        }

        if (v.empty())
            cout << "EMPTY";
        else
        {
            for (auto it : v)
            {
                cout << it << " ";
            }
        }
    }

    return 0;
}