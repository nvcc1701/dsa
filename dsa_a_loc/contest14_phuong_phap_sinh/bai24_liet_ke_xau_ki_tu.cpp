#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

char c;
int n, k;
vector<char> v;
int a[100];

void print()
{
    for (int i = 0; i < k; i++)
    {
        cout << v[a[i]];
    }
    cout << endl;
}

void Try(int i)
{
    for (int j = 0; j < n; j++)
    {
        a[i] = j;
        if (i == k - 1)
        {
            print();
        }
        else
        {
            Try(i + 1);
        }
    }
}

void run_case()
{
    cin >> c >> k;
    c = toupper(c);
    for (char i = 'A'; i <= c; i++)
    {
        v.push_back(i);
    }

    n = v.size();

    Try(0);
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