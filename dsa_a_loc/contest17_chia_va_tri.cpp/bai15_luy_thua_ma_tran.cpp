#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 11;

ll n, k;
struct Matrix
{
    ll a[MAX][MAX];

    Matrix operator*(Matrix other)
    {
        Matrix res;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                res.a[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    res.a[i][j] += (a[i][k] * other.a[k][j]) % MOD;
                    res.a[i][j] %= MOD;
                }
            }
        }

        return res;
    }
};

Matrix bipow(Matrix A, ll n)
{
    if (n == 1)
        return A;

    Matrix X = bipow(A, n / 2);

    if (n % 2)
        return X * X * A;
    else
        return X * X;
}

void run_case()
{
    cin >> n >> k;

    Matrix base;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> base.a[i][j];

    Matrix res = bipow(base, k);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << res.a[i][j] << " ";
        cout << endl;
    }
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
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}