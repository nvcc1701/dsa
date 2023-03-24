#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
int a[21];

void init()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
}

vector<vector<int>> res;
vector<int> tmp;
void Try(int i, int cnt)
{
    for (int j = cnt; j <= n; j++)
    {
        if (a[j - 1] < a[j])
        {
            tmp.push_back(a[j]);
            res.push_back(tmp);
            Try(i, j + 1);
        }
        else
        {
            tmp.push_back(a[i]);
            tmp.clear();
            Try(i + 1, j + 1);
        }
    }
}

// 4

void run_case()
{
    init();
    Try(1);

    sort(res.begin(), res.end());
    for (auto x : res)
    {
        for (auto x1 : x)
            cout << x1 << " ";
        cout << endl;
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