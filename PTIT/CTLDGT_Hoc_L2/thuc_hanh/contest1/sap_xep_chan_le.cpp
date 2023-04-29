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
    // 1 2 3 4

    vector<int> chan;
    vector<int> le;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        if (i % 2)
            le.push_back(x);
        else
            chan.push_back(x);
    }

    sort(le.begin(), le.end());
    sort(chan.begin(), chan.end(), greater<int>());

    for (int i = 0; i < le.size(); i++)
    {
        cout << le[i] << " ";
        if (i != le.size() - 1)
            cout << chan[i] << " ";
        else if (le.size() == chan.size())
            cout << chan[i] << " ";
    }

    // 1 2 3 4
    // 1 2 3 4 5
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