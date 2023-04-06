#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
string a;
bool final;

void generate()
{
    // 01000
    int i = n - 1;
    while (i >= 0 && a[i] == '0')
    {
        a[i] = '1';
        i--;
    }

    if (i == -1)
        final = true;
    else
    {
        a[i] = '0';
    }
}

void run_case()
{
    final = false;
    getline(cin, a);
    n = a.size();

    generate();
    if (final)
    {
        for (int i = 0; i < n; i++)
            cout << 1;
    }
    else
    {
        for (int i = 0; i < n; i++)
            cout << a[i];
    }

    cout << endl;
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
    cin.ignore();
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