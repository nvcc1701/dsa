#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e2 + 5;

int n;
int f[MAX]; // o ky tu thu i thi can chi phi la?

void run_case()
{
    cin >> n;
    int x, y, z;
    cin >> x >> y >> z;

    f[1] = x;
    for (int i = 2; i <= n; i++)
    {
        if (!(i % 2))
        {
            // neu i la so chan, nghia la i hien tai phai dc tao nen boi i truoc tu phep insert hoac phep copy
            f[i] = min(f[i - 1] + x, f[i / 2] + z);
        }
        else
        {
            // neu i hien tai la so le nghia la i dc tao nen tu i truoc day bang phep insert hoac copy delte
            f[i] = min(f[i - 1] + x, f[(i + 1) / 2] + z + y);
        }
    }

    cout << f[n] << endl;
}

int main()
{

// #define LOCAL

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