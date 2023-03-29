#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;
bool prime[501];
vector<int> Prime;
void sieve()
{
    prime[0] = prime[1] = false;
    for (int i = 2; i <= 501; i++)
    {
        prime[i] = true;
    }

    for (int i = 2; i <= sqrt(501); i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 501; j += i)
            {
                prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= 501; i++)
    {
        if (prime[i])
            Prime.push_back(i);
    }
}

vector<int> tmp;
ll sum = 0;
vector<vector<int>> res;
void Try(int start)
{
    for (int j = start; j < Prime.size(); j++)
    {
        if (sum + Prime[j] <= n)
        {

            tmp.push_back(Prime[j]);
            sum += Prime[j];

            if (tmp.size() == k)
            {
                if (sum == n)
                    res.push_back(tmp);
            }
            else
            {
                Try(j + 1);
            }
            tmp.pop_back();
            sum -= Prime[j];
        }
    }
}

void run_case()
{
    cin >> n >> k;
    sieve();

    Try(0);
    if (res.size() == 0)
    {
        cout << "NOT FOUND";
        return;
    }

    sort(res.begin(), res.end());
    for (auto x : res)
    {
        for (int i = 0; i < x.size(); i++)
        {
            if (i != x.size() - 1)
                cout << x[i] << +" + ";
            else
                cout << x[i];
        }
        cout << endl;
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