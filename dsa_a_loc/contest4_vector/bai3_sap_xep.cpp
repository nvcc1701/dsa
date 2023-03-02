#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    for (auto it : v)
        cout << it << " ";
    cout << endl;

    auto it = v.rbegin();

    while (it != v.rend())
    {
        cout << *it << " ";
        ++it;
    }

    return 0;
}