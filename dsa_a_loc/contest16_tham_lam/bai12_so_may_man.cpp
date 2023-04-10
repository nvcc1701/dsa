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

    // xem co the tao ra so co max bao nhieu so 7
    // duyet nguoc lai xem so co so luong so7 la bao nhieu thi thoa man bai toan
    for (int d7 = n / 7; d7 >= 0; d7--)
    {
        int d4 = n - d7 * 7;
        if (d4 % 4 == 0)
        {
            for (int i = 0; i < d4 / 4; i++)
                cout << 4;
            for (int i = 0; i < d7; i++)
                cout << 7;

            return;
        }
    }
    cout << -1;
}

// 16/7 = 2 -> du 2

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