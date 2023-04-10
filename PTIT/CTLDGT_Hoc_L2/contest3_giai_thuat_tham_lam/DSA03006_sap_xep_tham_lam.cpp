#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;

string calc(vector<int> a, vector<int> b)
{
    // 1 6 3 4 5 2 7
    // 0           6
    // 1 2 3 4 5 6 7
    //
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i] && a[i] != b[b.size() - i - 1])
            return "No\n";
    }
    return "Yes\n";
}

void run_case()
{
    cin >> n;
    vector<int> a(n), b(n);

    for (auto &x : a)
        cin >> x;
    b = a;

    sort(b.begin(), b.end());
    cout << calc(a, b);
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