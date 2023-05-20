#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

// vector<int> primes;
bool prime[MAX];
void init()
{
    fill(prime, prime + MAX, true);

    prime[0] = false;
    prime[1] = false;

    for (int i = 2; i * i <= MAX; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= MAX; j += i)
                prime[j] = false;
        }
    }

    // for (int i = 2; i <= MAX; i++)
    // {
    //     if (prime[i])
    //         primes.push_back(i);
    // }
}

void run_case()
{
    int n;
    cin >> n;

    int m = n >> 1;
    for (int i = 2; i <= m; i++)
    {
        if (prime[i] && prime[n - i])
        {
            cout << i << " " << n - i << endl;
            return;
        }
    }

    cout << -1 << endl;
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
    init();
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}