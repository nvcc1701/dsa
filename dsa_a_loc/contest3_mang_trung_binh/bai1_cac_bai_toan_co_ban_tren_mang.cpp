#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

ll n;
vector<ll> v;
bool prime[MAX];

bool reverable()
{
    int i = 0, j = v.size() - 1;
    while (i < j)
    {
        if (v[i] != v[j])
            return false;
    }
    return true;
}

// void sieve()
// {
//     for (int i = 0; i <= MAX; i++)
//     {
//         prime[i] = true;
//     }

//     prime[0] = prime[1] = false;
//     for (int i = 2; i <= sqrt(MAX); i++)
//     {
//         if (prime[i])
//         {
//             for (int j = i * i; j <= MAX; j += i)
//             {
//                 prime[j] = false;
//             }
//         }
//     }
// }

bool check(ll n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}

void run_case()
{
    cin >> n;
    int x;

    ll Max = -LINF;
    int max_i;

    ll min = LINF;
    int min_i;

    ll cnt_prime = 0;

    ll mul = 1;

    // sieve();

    for (int i = 0; i < n; i++)
    {
        cin >> x;

        if (Max < x)
        {
            Max = x;
            max_i = i;
        }

        if (min >= x)
        {
            min = x;
            min_i = i;
        }

        if (check(x))
        {
            cnt_prime++;
        }

        mul = (mul % MOD) * (x % MOD);
        mul %= MOD;
        v.push_back(x);
    }

    cout << Max << " " << max_i << endl;
    cout << min << " " << min_i << endl;
    cout << cnt_prime << endl;

    bool ok = reverable();
    sort(v.begin(), v.end());
    cout << max((v[0] * v[1]), (v[v.size() - 1] * v[v.size() - 2])) << endl;
    if (ok)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    cout << mul;
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