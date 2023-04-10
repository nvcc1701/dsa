#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

ll n, k;
ll F[100];

void init()
{
    F[1] = F[2] = 1;
    for (int i = 3; i <= 92; i++)
        F[i] = F[i - 1] + F[i - 2];
}

char fibo(ll n, ll k)
{
    if (n == 1)
        return 'A';
    if (n == 2)
        return 'B';

    if (k <= F[n - 2])
        return fibo(n - 2, k);
    else
        return fibo(n - 1, k - F[n - 2]);
}

void run_case()
{
    cin >> n >> k;
    init();
    cout << fibo(n, k);
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