#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 2;

ll n;

struct Matrix
{
    ll a[MAX][MAX];

    Matrix operator*(Matrix other)
    {
        Matrix res;
        for (int i = 0; i < MAX; i++)
        {
            for (int j = 0; j < MAX; j++)
            {
                res.a[i][j] = 0;
                for (int k = 0; k < MAX; k++)
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
    cin >> n;

    Matrix base;
    base.a[0][0] = 1;
    base.a[0][1] = 1;
    base.a[1][0] = 1;
    base.a[1][1] = 0;

    cout << bipow(base, n).a[0][1] << endl;
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