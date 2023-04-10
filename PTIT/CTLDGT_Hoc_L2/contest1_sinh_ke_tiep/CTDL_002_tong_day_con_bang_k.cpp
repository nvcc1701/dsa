#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int a[MAX];
int c[MAX];
int n, k;
int cnt = 0;
bool fianl = false;

void init()
{
    for (int i = 1; i <= n; i++)
        a[i] = 0;
}

void generate()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }

    if (i == 0)
        fianl = true;
    else
        a[i] = 1;
}

void run_case()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> c[i];

    init();

    while (!fianl)
    {
        generate();

        ll sum = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i])
                sum += c[i];
        }

        if (sum == k)
        {
            cnt++;
            for (int i = 1; i <= n; i++)
            {
                if (a[i])
                    cout << c[i] << " ";
            }
            cout << endl;
        }
    }

    cout << cnt;
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