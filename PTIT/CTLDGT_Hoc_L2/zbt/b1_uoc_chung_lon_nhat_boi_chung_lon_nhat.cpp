#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

// int gcd(int a, int b) O(N)
// {
//     if (b == 0)
//         return a;
//     else
//         return gcd(b, a % b);
// }

int gcd(int a, int b) //O(n)
{
    for (int i = max(a, b); i >= 0; i--)
    {
        if (a % i == 0 && b % i == 0)
            return i;
    }
}

void run_case()
{
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << " " << (a * b) / gcd(a, b) << endl;
}

int main()
{

#define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}