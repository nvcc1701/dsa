#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;
vector<string> v;
int a[100];
bool final;

void init()
{
    int b;
    cin >> b >> k;

    string s;
    set<string> se;
    for (int i = 0; i < b; i++)
    {
        cin >> s;
        se.insert(s);
    }
    n = se.size();

    v.push_back("0");
    for (auto x : se) // lay cac gia tri co the cua to hop
        v.push_back(x);

    for (int i = 1; i <= k; i++) // cau hinh ban dau cua to hop
        a[i] = i;

    final = false;
}

void print()
{
    for (int i = 1; i <= k; i++)
        cout << v[a[i]] << " ";
    cout << endl;
}

void Try(int i, int start)
{
    // 1 2 4 5

    for (int j = start; j <= n; j++)
    {
        a[i] = j;
        if (i == k)
        {
            print();
        }
        else
        {
            Try(i + 1, j + 1);
        }
    }
}

// void Try(int i)
// {
//     // 1 2 4 5

//     for (int j = a[i - 1] + 1; j <= n - k + i; j++)
//     {
//         a[i] = j;
//         if (i == k)
//         {
//             print();
//             return;
//         }
//         else
//         {
//             Try(i + 1);
//         }
//     }
// }

void run_case()
{
    init();
    Try(1, 1);
    // Try(1);
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