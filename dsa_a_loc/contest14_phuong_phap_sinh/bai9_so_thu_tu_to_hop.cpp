#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;
int a[16], b[16];
bool final = false;
vector<vector<int>> v;

bool check(vector<int> v)
{
    for (int j = 0; j < k; j++)
    {
        if (v[j] != b[j])
            return false;
    }

    return true;
}

void init()
{
    for (int i = 1; i <= k; i++)
        a[i] = i;
}

void generate()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
        i--;

    if (i == 0)
        final = true;
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
            a[j] = a[j - 1] + 1;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    for (int i = 0; i < k; i++)
        cin >> b[i];

    init();
    while (!final)
    {
        vector<int> tmp;
        for (int i = 1; i <= k; i++)
            tmp.push_back(a[i]);
        v.push_back(tmp);
        generate();
    }

    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (check(v[i]))
        {
            cout << v.size() - i << " ";
            return 0;
        }
    }
    return 0;
}