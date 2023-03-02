#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        pair<int, int> p;
        p.first = x;
        p.second = y;
        v.push_back(p);
    }

    for (auto it : v)
    {
        double res = sqrt(it.first * it.first + it.second * it.second);
        cout << setprecision(2) << fixed << res << " ";
    }
    return 0;
}