#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int merge(int a[], int l, int m, int r)
{
    vector<int> x(a + l, a + m + 1);
    vector<int> y(a + m + 1, a + r + 1);

    int i = 0, j = 0;
    int cnt = 0;

    while (i < x.size() && j < y.size())
    {
        if (x[i] <= y[j])
        {
            a[l] = x[i];
            l++;
            i++;
        }
        else
        {
            cnt += x.size() - i;
            a[l] = y[j];
            l++;
            j++;
        }
    }

    while (i < x.size())
    {
        a[l] = x[i];
        l++;
        i++;
    }

    while (j < y.size())
    {
        a[l] = y[j];
        l++;
        j++;
    }
    return cnt;
}

int mergeSort(int a[], int l, int r)
{
    int dem = 0;
    if (l < r)
    {
        int m = (l + r) / 2;
        dem += mergeSort(a, l, m);
        dem += mergeSort(a, m + 1, r);
        dem += merge(a, l, m, r);
    }
    return dem;
}

void run_case()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &x : a)
        cin >> x;

    cout << mergeSort(a, 0, n - 1);
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