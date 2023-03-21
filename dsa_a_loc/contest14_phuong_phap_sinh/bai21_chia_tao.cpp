#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
int a[21];
vector<ll> v(21);
bool final = false;
ll res = LINF;

void init()
{
    for (int i = 1; i <= n; i++)
        a[i] = 0;
}

void generate()
{
    // 0 0 1 0
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }

    if (i == 0)
    {
        final = true;
    }
    else
    {
        a[i] = 1;
    }
}

void run_case()
{

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    init();
    while (!final)
    {
        ll aa = 0, bb = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i])
            {
                aa += v[i];
            }
            else
            {
                bb += v[i];
            }
        }

        res = min(res, abs(aa - bb));
        generate();
    }

    cout << res;
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
    cout << "\n\nExecution time: " << (double)duration.count() / 1000 << " milliseconds\n";
#endif

    return 0;
}