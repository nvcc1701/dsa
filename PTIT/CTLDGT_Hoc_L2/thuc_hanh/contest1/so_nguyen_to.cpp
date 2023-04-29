#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1005;

int n, p, s;
int prime[MAX];
// vector<int> primes;

void eratos()
{
    fill(prime, prime + MAX, 1);
    prime[1] = prime[0] = 0;

    for (int i = 2; i * i <= MAX; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= MAX; j += i)
            {
                prime[j] = 0;
            }
        }
    }

    // for (int i = 2; i <= MAX; i++)
    // {
    //     if (prime[i])
    //         primes.push_back(i);
    // }
    // cout << "";
}

vector<vector<int>> res;
vector<int> v;
int tmp = 0;
void Try(int start)
{
    for (int j = start; j <= s; j++)
    {
        if (prime[j])
        {
            tmp += j;
            v.push_back(j);

            if (v.size() == n)
            {
                if (tmp == s)
                    res.push_back(v);
            }
            else if (v.size() < n && tmp < s)
                Try(j + 1);

            tmp -= j;
            v.pop_back();
        }
    }
}

void run_case()
{
    cin >> n >> p >> s;
    res.clear();

    Try(p + 1);
    cout << res.size() << endl;
    for (auto x1 : res)
    {
        for (auto x2 : x1)
            cout << x2 << " ";
        cout << endl;
    }
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
    eratos();
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}