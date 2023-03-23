#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;
int a[16];
int c[16];
vector<int> tmp;
vector<vector<int>> v;

void init()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    sort(a, a + n + 1);
}

ll sum = 0;
void Try(int cnt)
{

    for (int j = cnt; j <= n; j++)
    {
        if (c[j] == 0)
        {
            sum += a[j];
            tmp.push_back(a[j]);
            c[j] = 1;
            if (sum == k)
            {
                v.push_back(tmp);
            }
            else
            {
                Try(j);
            }
            c[j] = 0;
            sum -= a[j];
            tmp.pop_back();
        }
    }
}

void run_case()
{

    init();
    Try(1);

    for (auto x : v)
    {
        cout << "[";
        for (int i = 0; i < x.size(); i++)
        {
            if (i != x.size() - 1)
            {
                cout << x[i] << " ";
            }
            else
            {
                cout << x[i] << "] \n";
            }
        }
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