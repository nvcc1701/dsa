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

    // for (int i = 0; i < s.size(); i++)
    // {
    //     s[i] = toupper(s[i]);
    // }

    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }

    ll xx = 0;
    priority_queue<ll> q;
    for (auto x : mp)
    {
        q.push(x.second);
    }

    ll x;
    while (k--)
    {
        x = q.top();
        if (x == 0)
            break;
        q.pop();
        --x;
        q.push(x);
    }

    ll sum = 0;
    while (!q.empty())
    {
        x = q.top();
        sum += x * x;
        q.pop();
    }

    cout << sum << endl;
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
    cin >> Test;
    // cin.ignore();
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