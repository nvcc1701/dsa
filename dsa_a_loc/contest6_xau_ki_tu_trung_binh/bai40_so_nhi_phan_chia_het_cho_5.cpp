#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

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
    ll sum = 0;
    ll power = 1;
    for (int i = n.size() - 1; i >= 0; i--)
    {
        int bit = n[i] - '0';
        sum += bit * power;
        cout << bit * power << endl;
        power *= 2;
    }


    if (sum % 5 == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}