#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

//WA
void run_case()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    ll x;
    bool ok = false;
    map<ll, ll> mp;

    for (int i = 0; i < n1; i++)
    {
        cin >> x;
        if (mp[x] == 0)
            mp[x]++;
    }

    for (int i = 0; i < n2; i++)
    {
        cin >> x;
        if (mp[x] == 1)
            mp[x]++;
    }

    for (int i = 0; i < n3; i++)
    {
        cin >> x;
        if (mp[x] == 2)
        {
            mp[x]++;
            ok = true;
        }
    }

    if (!ok)
    {
        cout << "-1\n";
        return;
    }

    for (auto [fi, se] : mp)
    {
        if (se == 3)
            cout << fi << " ";
    }
    cout << endl;
}

int main()
{

// #define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
    auto start = chrono::high_resolution_clock::now();
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    cin >> Test;
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