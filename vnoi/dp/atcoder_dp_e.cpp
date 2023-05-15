#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll LINF = 1e18 + 5;
const int MAX = 1e5 + 5;

int N, W;
ll f[MAX];
void run_case()
{
    cin >> N >> W;
    int w[N + 1], v[N + 1];
    for (int i = 1; i <= N; i++)
        cin >> w[i] >> v[i];

    fill(f, f + MAX, LINF);

    f[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = MAX - 1; j >= 0; j--)
        {
            if (f[j] + w[i] <= W) // neu khoi luong tai value j ma cong duoc them khoi luong w[i] nua thi nghia la co
                                  // the them 1 value v[i] nua vao kq
                f[j + v[i]] = min(f[j + v[i]], f[j] + w[i]); // cap nhat khoi luong tai f[j+v[i]]
        }
    }

    for (int i = MAX - 1; i >= 0; i--)
    {
        if (f[i] != LINF)
        {
            // cout << i << " " << f[i] << endl;
            cout << i << endl;
            break;
        }
    }
}

int main()
{

#define LOCAL

#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int Test = 1;
    for (int test = 0; test < Test; test++)
    {
        run_case();
    }
}
