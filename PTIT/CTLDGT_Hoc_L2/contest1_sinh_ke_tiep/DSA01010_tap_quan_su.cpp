#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MAX = 1e6 + 5;

int n, k;
int a[41];
map<int, int> mp;

void generate()
{
    bool final = false;

    int i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
    }

    if (i == 0)
        final = true;
    else
    {
        a[i]++;
        i++;
        for (int j = i; j <= k; j++)
            a[j] = a[j - 1] + 1;
    }

    if (final)
        cout << k << "\n";
    else
    {
        int cnt = 0;
        for (int i = 1; i <= k; i++)
        {
            mp[a[i]]++;
            if (mp[a[i]] == 2)
                cnt++;
        }
        cout << k - cnt << "\n";
    }
}

void runcase()
{
    mp.clear();
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    generate();
}

int main()
{

// #define LOCAL
#ifdef LOCAL
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int test;
    cin >> test;
    for (int Test = 0; Test < test; Test++)
    {
        runcase();
    }

    return 0;
}