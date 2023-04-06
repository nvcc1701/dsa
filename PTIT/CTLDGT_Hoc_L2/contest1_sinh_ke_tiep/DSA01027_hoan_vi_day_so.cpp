#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
int c[10], a[10];
bool final;

void init()
{
    final = false;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> c[i];
        a[i] = i;
    }
    sort(c + 1, c + n + 1);
}

void generate()
{
    // 1 2 3 6 9 8 7 5 4
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
        i--;

    if (i == 0)
        final = true;
    else
    {
        int j = n;
        while (a[i] > a[j])
            j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

void print()
{
    for (int i = 1; i <= n; i++)
        cout << c[a[i]] << " ";
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