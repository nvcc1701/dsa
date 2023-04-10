#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int k;
string s;
void run_case()
{
    cin >> k >> s;
    map<int, int> mp;
    for (auto x : s)
        mp[x]++;

    priority_queue<int> pq;
    for (auto [x, y] : mp)
        pq.push(y);

    ll x;
    while (k--)
    {
        x = pq.top();
        pq.pop();
        x--;
        pq.push(x);
    }

    ll sum = 0;
    while (pq.size() > 0)
    {
        sum += pq.top() * pq.top();
        pq.pop();
    }

    cout << sum << endl;
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