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

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<vector<int>> res;
    for (int i = 0; i < n - 1; i++) 
    {
        int min_pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[min_pos] > v[j])
                min_pos = j;
        }

        swap(v[i], v[min_pos]);
        res.push_back(v);
    }

    for (int i = res.size() - 1; i >= 0; i--)
    {
        cout << "Buoc " << i + 1 << ": ";
        for (auto x : res[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
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