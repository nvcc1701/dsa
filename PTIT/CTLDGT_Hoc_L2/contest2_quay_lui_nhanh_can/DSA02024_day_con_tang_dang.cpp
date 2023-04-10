#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
int a[200];
vector<string> res;
vector<int> v;

void init()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    v.push_back(-INF);
}

void update()
{
    string s = "";
    for (int i = 1; i < v.size(); i++)
    {
        if (i == v.size() - 1)
            s += to_string(v[i]);
        else
            s += to_string(v[i]) + " ";
    }
    res.push_back(s);
}

void Try(int start)
{
    for (int j = start; j < n; j++)
    {
        if (a[j] > *v.rbegin())
        {
            v.push_back(a[j]);
            if (v.size() > 2)
                update();
            Try(j + 1);
            v.pop_back();
        }
    }
}

void run_case()
{
    init();
    Try(0);

    sort(res.begin(), res.end());
    for (auto x : res)
        cout << x << endl;
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