#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, x;
int a[21];
vector<int> v;
ll sum = 0;

void init()
{
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a, a + n + 1);
}

void print(vector<int> v)
{
    cout << "{";
    for (int i = 0; i < v.size(); i++)
    {
        if (i != v.size() - 1)
        {
            cout << v[i] << " ";
        }
        else
        {
            cout << v[i] << "}\n";
        }
    }
}

vector<vector<int>> res;

void Try(int start)
{
    for (int j = start; j <= n; j++)
    {
        v.push_back(a[j]);
        sum += a[j];
        if (sum == x)
        {
            res.push_back(v);
        }
        else if (sum < x)
        {
            Try(j);
        }
        // backtrack
        v.pop_back();
        sum -= a[j];
    }
}

void run_case()
{
    init();
    Try(1);

    if (res.size() == 0)
    {
        cout << -1;
        return;
    }
    cout << res.size() << endl;
    for (auto x : res)
    {
        print(x);
    }
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