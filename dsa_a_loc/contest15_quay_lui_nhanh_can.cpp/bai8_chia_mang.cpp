#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;
int a[101];
int b[101];
bool ok = false;

void init()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
}

// 112233

bool check()
{
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        mp[b[i]] += a[i];
    }

    ll sum = mp.begin()->second;
    for (auto x : mp)
    {
        if (x.second != sum)
            return false;
    }

    return true;
}

void print()
{
    for (int i = 1; i <= n; i++)
        cout << b[i];

    cout << endl;
}

map<int, int> mp;
void Try(int i, int cnt)
{
    for (int j = cnt; j <= n; j++)
    {
        b[i] = j;
        mp[j]++;
        if (i == n)
        {
            print();
            if (mp.size() == k)
                if (check())
                    ok = true;
        }
        else
        {
            Try(i + 1, j + 1); // ko hieu sao dung
        }
        mp[j]--;
        if (mp[j] == 0)
            mp.erase(j);
    }
}

void run_case()
{
    init();
    Try(1, 1);
    if (!ok)
        cout << 0;
    else
        cout << 1;
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