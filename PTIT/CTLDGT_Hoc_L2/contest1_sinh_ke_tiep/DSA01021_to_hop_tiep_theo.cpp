#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;
int a[41];
int cnt;
map<int, int> mp;
void next_combanation()
{
    // n = 6
    // 1 2 5 6 // kiem tra tu duoi ve dau xem so do da la max chua

    int i = k;
    while (i >= 1 && a[i] == n - k + i)
        i--;

    if (i == 0)
        cnt = k;
    else
    {
        a[i]++;
        cnt++;
        mp[a[i]]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
            mp[a[j]]++;
            if (mp[a[j]] == 1)
                cnt++;
        }
    }
}

void run_case()
{
    cin >> n >> k;
    cnt = 0;
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    next_combanation();
    cout << cnt << endl;
    mp.clear();
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
    cin >> Test;
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