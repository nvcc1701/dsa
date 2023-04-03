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
    int a[n + 1], pos[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pos[a[i]] = i;
    }

    // doi vi tri lon nhat co the
    //  doi ca positon
    //  2 6 1 5 4 3
    //  1 2 3 4 5 6
    //  6 2
    //  1 2
    for (int i = 1; i <= n; i++)
    {
        if (!k)
            break;

        if (a[i] != n - i + 1)
        {
            k--;
            a[pos[n - i + 1]] = a[i];   // a[pos[6]] = 2;
            pos[a[i]] = pos[n - i + 1]; // pos[2] = pos[6]
            a[i] = n - i + 1;           // a[i] = 6;
            pos[a[i]] = i;              // pos[6] = 1
        }
    }

    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
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