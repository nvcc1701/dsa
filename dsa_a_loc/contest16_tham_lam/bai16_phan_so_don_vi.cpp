#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void solve(ll tu, ll mau)
{
    if (mau == 0 || tu == 0)
    {
        return;
    }

    if (mau % tu == 0) // truong hop cuoi cung
    {
        cout << "1/" << (mau / tu);
        return;
    }

    if (tu % mau == 0)
    {
        cout << tu / mau;
        return;
    }

    if (tu > mau)
    {
        ll j = tu / mau;
        if (j == 1)
            cout << "1/";
        cout << j << " + ";
        solve(tu % mau, mau);
    }
    else
    {
        ll j = mau / tu + 1;
        cout << "1/" << j << " + ";
        solve(tu * j - mau, mau * j);
    }
}

void run_case()
{
    ll tu, mau;
    cin >> tu >> mau;

    // // khu de quy dung vong lap
    // ll x;
    // while (true)
    // {
    //     if (mau % tu == 0)
    //     {
    //         cout << "1/" << mau / tu;
    //         break;
    //     }
    //     else
    //     {
    //         x = mau / tu + 1;
    //         cout << "1/" << x << " + ";
    //         tu = tu * x - mau;
    //         mau = mau * x;
    //     }
    // }

    solve(tu, mau);
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