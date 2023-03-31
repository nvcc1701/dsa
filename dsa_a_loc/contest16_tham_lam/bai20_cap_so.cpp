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
    int a[n];

    int cnt_chan = 0, cnt_le = 0;
    for (auto &x : a)
    {
        cin >> x;
        if (x % 2 == 0)
            cnt_chan++;
        else
            cnt_le++;
    }

    // kiem tra tinh chan le
    if (cnt_chan % 2 == 0 && cnt_le % 2 == 0)
    {
        cout << "YES";
        return;
    }

    // kiem tra cac so cach nhau 1 don vi
    sort(a, a + n);
    for (int i = 1; i < n; i++) // check 2 so mot
    {
        if (abs(a[i] - a[i - 1]) != 1)
        {
            cout << "NO";
            return;
        }
    }

    cout << "YES";
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