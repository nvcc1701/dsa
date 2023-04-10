#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;
int a[MAX];
bool final;

void next_combination()
{
    // n = 5
    // 1 2 3 5
    // tim phan tu max = n-k+i tu trai qua phai
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
    }

    if (i == 0)
    {
        final = true;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= n; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}

void run_case()
{
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
        cin >> a[i];
    final = false;

    next_combination();
    if (final)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << i << " ";
        }
    }
    else
    {
        for (int i = 1; i <= k; i++)
        {
            cout << a[i] << " ";
        }
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