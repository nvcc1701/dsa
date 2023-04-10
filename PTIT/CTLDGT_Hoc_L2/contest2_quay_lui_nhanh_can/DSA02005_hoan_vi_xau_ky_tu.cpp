#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

string b;
int n;
bool c[100];
vector<int> v;

void init()
{
    cin >> b;
    n = b.size();
    memset(c, false, sizeof(c));
}

void print()
{
    for (int i = 0; i < v.size(); i++)
        cout << b[v[i]];
    cout << " ";
}

void Try()
{
    // 1 2 3 4
    // 1 3 2 4
    for (int j = 0; j < n; j++)
    {
        if (!c[j])
        {
            v.push_back(j);
            c[j] = true;
            if (v.size() == n)
                print();
            else
                Try();
            v.pop_back();
            c[j] = false;
        }
    }
}

void run_case()
{
    init();
    Try();
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