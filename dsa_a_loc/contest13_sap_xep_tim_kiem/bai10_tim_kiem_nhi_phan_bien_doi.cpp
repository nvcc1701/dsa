#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, a[MAX], x;
int cnt = 0;
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
            cnt++;
        }
        else if (a[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
  
    return (res >= 0) ? res : -1;
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
            cnt++;
        }
        else if (a[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }

    return (res >= 0) ? res : -1;
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
        else if (a[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }

    return (res >= 0) ? res : -1;
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
        else if (a[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }

    return (res >= 0) ? res : -1;
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

    cout << first_colide() << endl;
    cout << last_colide() << endl;
    cout << first_equal_or_greater_colide() << endl;
    cout << first_greater_colide() << endl;

    if (cnt == 0)
        cout << 0;
    else
        cout << cnt - 1;

    return 0;
}