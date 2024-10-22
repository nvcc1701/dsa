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
    int a[n + 1];

    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (i <= k)
        {
            mp[a[i]]++;
            if (i == k)
                cout << mp.rbegin()->first << " ";
        }
        else
        {
            mp[a[i]]++;
            mp[a[i - k]]--;
            if (mp[a[i - k]] == 0)
                mp.erase(a[i - k]);

            cout << mp.rbegin()->first << " ";
        }
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