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
    int a[n];
    for (auto &x : a)
        cin >> x;

    vector<vector<int>> res;

    for (int i = 0; i < n - 1; i++)
    {
        int minidx = i;
        bool check = false;
        for (int j = i + 1; j < n; j++)
        {
            if (a[minidx] > a[j])
            {
                check = true;
                minidx = j;
            }
        }
        // if (!check)
        //     break;

        swap(a[minidx], a[i]);
        vector<int> v(a, a + n);
        res.push_back(v);
    }

    for (int i = res.size() - 1; i >= 0; i--)
    {
        cout << "Buoc " << i + 1 << ": ";
        for (auto x : res[i])
            cout << x << " ";
        cout << endl;
    }
}

int main()
{

// #define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}