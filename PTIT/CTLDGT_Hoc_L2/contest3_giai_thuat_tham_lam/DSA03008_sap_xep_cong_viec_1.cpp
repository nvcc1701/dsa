#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
void run_case()
{
    cin >> n;
    int x;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back({x, -1});
    }

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v[i].second = x;
    }

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) { return a.second < b.second; }); // tap ung vien

    int end = -1;
    int cnt = 0;
    for (auto x : v)
    {
        if (x.first >= end) //ham thuc thi
        {
            cnt++; // ham lua chon
            end = x.second;
        }
    }

    cout << cnt << endl;
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
    cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}