#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void run_case()
{
    int n, k;
    cin >> n >> k;
    ll a[n];
    bool c[n] = {false}; // check xem phan tu o vi tri nay da lon nhat chua

    auto cmp = [](pair<ll, ll> &a, pair<ll, ll> &b) { return a.second < b.second; };
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, decltype(cmp)> PQ(cmp);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        PQ.push({i, a[i]});
    }

    for (int i = 0; i < n; i++)
    {
        if (k > 0)
        {
            auto x = PQ.top();
            if (x.first != i && !c[x.first])
            {
                swap(a[x.first], a[i]);
                c[i] = true;
                k--;
                PQ.pop();
            }
            else if (x.first == i)
            {
                PQ.pop();
            }
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{

#define LOCAL

#ifdef LOCAL
    freopen("input.txt ", "r", stdin);
    freopen("output2.txt ", "w", stdout);
    auto start = chrono::high_resolution_clock::now();
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
        cout << endl;
    }

#ifdef LOCAL
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    auto startT = chrono::system_clock::to_time_t(start);
    // cout << "\n\n" << ctime(&startT) << (double)duration.count() / 1000 << " seconds\n";
#endif

    return 0;
}