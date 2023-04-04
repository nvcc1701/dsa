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

    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }

    int cnt = 0; // dem so cac ki tu co lan xuat hien le
    for (auto [fi, se] : mp)
    {
        if (se % 2 == 1)
            cnt++;
    }

    // abbba
    if (cnt == 1)
    {
        cout << "1\n";
        return;
    }

    // abbbccca
    cout << ((cnt & 1) ? "1\n" : "2\n");
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