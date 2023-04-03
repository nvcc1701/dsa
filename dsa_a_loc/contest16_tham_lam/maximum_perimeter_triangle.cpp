#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

bool check(ll a, ll b, ll c)
{
    return a + b > c && a + c > b && b + c > a;
}

void run_case()
{
    int n;
    cin >> n;
    ll a[n];
    for (auto &x : a)
        cin >> x;

    ll max_perimeter = 0;
    ll x = -1, y = -1, z = -1;

    sort(a, a + n);

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (check(a[i], a[j], a[k]))
                {
                    ll tmp = a[i] + a[j] + a[k];
                    if (tmp > max_perimeter)
                    {
                        max_perimeter = tmp;
                        x = a[i];
                        y = a[j];
                        z = a[k];
                    }
                    else if (tmp == max_perimeter)
                    {
                        if (z < a[k])
                        {
                            x = a[i];
                            y = a[j];
                            z = a[k];
                        }
                        else if (z == a[k] && x < a[i])
                        {
                            x = a[i];
                            y = a[j];
                            z = a[k];
                        }
                    }
                }
            }
        }
    }

    if (x == -1)
        cout << -1;
    else
    {
        cout << x << " " << y << " " << z;
    }
}

int main()
{

#define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
    auto start = chrono::high_resolution_clock::now();
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

#ifdef LOCAL
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    auto startT = chrono::system_clock::to_time_t(start);
    cout << "\n\n" << ctime(&startT) << (double)duration.count() / 1000 << " seconds\n";
#endif

    return 0;
}