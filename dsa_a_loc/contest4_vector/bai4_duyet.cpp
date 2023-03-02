#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, l, r;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    cin >> l >> r;

    auto it = v.begin() + l;
    for (; it != v.begin() + r + 1; ++it)
        cout << *it << " ";

    cout << endl;
    it = v.begin() + r;
    for (; it != v.begin() + l - 1; --it)
        cout << *it << " ";

    return 0;
}