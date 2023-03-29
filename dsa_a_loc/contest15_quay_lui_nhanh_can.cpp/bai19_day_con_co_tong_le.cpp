#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
int a[100];

vector<int> tmp;
vector<vector<int>> res;
ll sum = 0;
void Try(int start)
{
    for (int j = start; j <= n; j++)
    {
        sum += a[j];
        tmp.push_back(a[j]);
        if ((sum) % 2 == 1)
        {
            res.push_back(tmp);
        }
        Try(j + 1);
        sum -= a[j];
        tmp.pop_back();
    }
}

void run_case()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    Try(1);

    if (res.size() == 0)
    {
        cout << "NOT FOUND";
        return;
    }
    
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