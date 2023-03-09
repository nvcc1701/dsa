#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

bool isDivisible(string n)
{
    if (n.size() < 2)
        return false;

    if (n[n.size() - 1] == '0' && n[n.size() - 2] == '0')
    {
        if (n[0] != '0' && n.size() > 2)
            return true;
        return false;
    }

    int lastTwoDigit = (n[n.size() - 2] - '0') * 10 + (n[n.size() - 1] - '0');

    if (lastTwoDigit % 25 == 0)
        return true;

    return false;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    cin >> n;

    if (isDivisible(n))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}