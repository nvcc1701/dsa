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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end(), [](int a, int b) {
        if (a % 2 == 0 && b % 2 == 0)
        {
            return a < b;
        }
        else if (a % 2 == 0)
        {
            return false;
        }
        else if (b % 2 == 0)
            return true;
        return a < b;
    });

    for (auto x : v)
        cout << x << " ";

    cout << endl;

    sort(v.begin(), v.end(), [](int a, int b) {
        if (a % 2 != 0 && b % 2 != 0)
        {
            return a < b;
        }
        else if (a % 2 != 0)
        {
            return false;
        }
        else if (b % 2 != 0)
            return true;
        return a < b;
    });

    for (auto x : v)
        cout << x << " ";
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