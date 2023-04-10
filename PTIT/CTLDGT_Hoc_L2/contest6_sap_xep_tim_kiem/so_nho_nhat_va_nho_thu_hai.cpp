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
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << "-1\n";
        return;
    }

    int x;
    set<int> se;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        se.insert(x);
    }

    if (se.size() == 1)
    {
        cout << "-1\n";
        return;
    }

    auto i = se.begin();
    cout << *i << " ";
    i++;
    cout << *i << "\n";

    // int a[n];
    // for (auto &x : a)
    //     cin >> x;

    // sort(a, a + n);
    // cout << a[0] << " " << a[1] << endl;
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