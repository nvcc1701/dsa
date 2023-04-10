#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
void run_case()
{
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(a, a + n);

    int start, end;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            start = i + 1;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] != b[i])
        {
            end = i + 1;
            break;
        }
    }

    cout << start << " " << end << "\n";

    // bool first = false;
    // bool ok = false;
    // int start, end;

    // for (int i = 1; i < n - 1; i++)
    // {
    //     if(ok) break;

    //     if ((a[i - 1] > a[i]) && !first)
    //     {
    //         start = i;
    //         while (true)
    //         {
    //             if (a[i] > a[start])
    //             {
    //                 start++;
    //                 first = true;
    //                 break;
    //             }
    //             start--;
    //         }
    //     }

    //     if (a[i] > a[i + 1] && first)
    //     {
    //         end = i;
    //         while (true)
    //         {
    //             if (a[end] < a[i])
    //             {
    //                 end = i - 1;
    //                 ok = true;
    //                 break;
    //             }
    //             i++;
    //         }
    //     }
    // }
    // // 1 2 4 3 7 5 6
    // // + + + - + - +

    // cout << start + 1 << " " << end + 1 << endl;
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