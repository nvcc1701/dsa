#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

string a, b;
void run_case()
{
    cin >> a >> b;

    for (auto &x : a)
    {
        if (x == '5')
            x = '6';
    }

    for (auto &x : b)
    {
        if (x == '5')
            x = '6';
    }

    cout << stoll(a) + stoll(b) << " ";

    for (auto &x : a)
    {
        if (x == '6')
            x = '5';
    }

    for (auto &x : b)
    {
        if (x == '6')
            x = '5';
    }

    cout << stoll(a) + stoll(b);
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