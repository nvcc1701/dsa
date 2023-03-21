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
    q.push("66");
    q.push("88");

    while (!q.empty())
    {
        string s = q.front();
        q.pop();

        if (v.size() > 4005)
            break;

        v.push_back(s);

        string s1 = "6" + s + "6";
        q.push(s1);
        s1 = "8" + s + "8";
        q.push(s1);
    }

    sort(v.begin(), v.end(), [](string a, string b) {
        if (a.size() == b.size())
            return a < b;
        return a.size() < b.size();
    });

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
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
    cout << "\n\nExecution time: " << (double)duration.count() / 1000 << " seconds\n";
#endif

    return 0;
}