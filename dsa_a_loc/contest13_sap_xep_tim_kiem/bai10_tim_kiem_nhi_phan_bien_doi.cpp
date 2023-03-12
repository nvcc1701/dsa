#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, a[MAX], x;
int first_colide()
{
    int l = 0, r = n - 1;
    int res = -INF;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == x)
        {
            res = mid;
            r = mid - 1;
        }
        else if (a[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }

    if (res >= 0)
        return res;
    else
        return -1;
}

int last_colide()
{
    int l = 0, r = n - 1;
    int res = -INF;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == x)
        {
            res = mid;
            l = mid + 1;
        }
        else if (a[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }

    if (res >= 0)
        return res;
    else
        return -1;
}

int first_equal_or_greater_colide()
{
    int l = 0, r = n - 1;
    int res = -INF;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] >= x)
        {
            res = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    if (res >= 0)
        return res;
    else
        return -1;
}

int first_greater_colide()
{
    int l = 0, r = n - 1;
    int res = -INF;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] > x)
        {
            res = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    if (res >= 0)
        return res;
    else
        return -1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> x;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int t1 = first_colide();
    int t2 = last_colide();

    cout << t1 << endl;
    cout << t2 << endl;
    cout << first_equal_or_greater_colide() << endl;
    cout << first_greater_colide() << endl;

    if (t1 == -1)
        cout << 0;
    else
        cout << (t2 - t1) + 1;

    return 0;
}