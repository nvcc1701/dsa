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

    // x%5 +  y%3 = n
    //->x*5 + y*3 = n;
    // 5 + 6 = n;

    for (int d5 = n / 3; d5 >= 0; d5--)
    {
        int tmp = n - d5 * 3;
        if (tmp % 5 == 0)
        {
            for (int i = 0; i < d5 * 3; i++)
                cout << 5;

            for (int i = 0; i < tmp; i++)
                cout << 3;

            cout << endl;
            return;
        }
    }

    cout << -1 << endl;
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