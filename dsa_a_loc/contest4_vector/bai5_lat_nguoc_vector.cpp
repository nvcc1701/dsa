#include <iostream>
#include <vector>
#include <algorithm> // std::reverse
using namespace std;

int main()
{
    int n, l, r;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];
    cin >> l >> r;

    reverse(v.begin(), v.end());
    for (auto it : v)
        cout << it << " ";

    cout << endl;

    reverse(v.begin() + l, v.begin() + r + 1);
    for (auto it : v)
        cout << it << " ";

    return 0;
}