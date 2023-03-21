#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void run_case()
{
    int n;
    cin >> n;
    vector<string> v;
    queue<string> q;
    q.push("00");
    q.push("11");

    while (!q.empty())
    {
        string x = q.front();
        q.pop();
        if (x.size() > n)
            break;
        v.push_back(x);

        string xn = "0" + x + "0";
        q.push(xn);
        xn = "1" + x + "1";
        q.push(xn);
    }

    sort(v.begin(), v.end());
    for (auto x : v)
        cout << x << endl;
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
    cout << "\n*** Execution time: " << (double)duration.count() / 1000 << " milliseconds ***\n";
#endif

    return 0;
}