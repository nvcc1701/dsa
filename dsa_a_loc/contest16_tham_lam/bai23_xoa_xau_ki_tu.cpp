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
    string s;
    cin >> s;

    int len = 0;
    vector<int> v;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            len++;
        }
        else
        {
            if (len != 0)
                v.push_back(len);
            len = 0;
        }
    }
    if (len != 0)
        v.push_back(len);

    ll res = 0;
    ll x;

    sort(v.begin(), v.end(), greater<ll>());

    for (int i = 0; i < v.size(); i += 2)
    {
        res+=v[i];
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
    auto startT = chrono::system_clock::to_time_t(start);
    cout << "\n\n" << ctime(&startT) << (double)duration.count() / 1000 << " seconds\n";
#endif

    return 0;
}