#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int x, n;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> x;
    vector<int> v;
    while (n--)
    {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), [](int a, int b) {
        if (abs(a - x) == abs(b - x))
        {
            return a < b;
        }
        return abs(a - x) < abs(b - x);
    });

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    sort(v.begin(), v.end(), [](int a, int b) {
        if (a % 2 == 0 && b % 2 != 0)
        {
            return true;
        }

        if (a % 2 != 0 && b % 2 == 0)
        {
            return false;
        }

        if (a % 2 == 0 && b % 2 == 0)
            return a < b;

        if (a % 2 != 0 && b % 2 != 0)
            return a > b;
    });
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}