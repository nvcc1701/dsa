#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;
int a[20];
int c[20];
bool final;

void init()
{
    int b;
    cin >> b >> k;
    set<int> se;
    int x;
    for (int i = 0; i < b; i++)
    {
        cin >> x;
        se.insert(x);
    }

    n = se.size();
    auto it = se.begin();
    for (int i = 1; i <= n; i++)
    {
        c[i] = *it;
        it++;
    }

    final = false;
    for (int i = 1; i <= k; i++)
        a[i] = i;
}

void generate()
{

    // 1 2 3 5 6
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
        i--;

    if (i == 0)
        final = true;
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
            a[j] = a[j - 1] + 1;
    }
}

void print()
{
    for (int i = 1; i <= k; i++)
    {
        cout << c[a[i]] << " ";
    }
    cout << endl;
}

void run_case()
{
    init();
    while (!final)
    {
        print();
        generate();
    }
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