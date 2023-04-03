#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void run_case()
{
    int t, n, k;
    {
        cin >> n >> k;
        int a[n + 1], pos[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            pos[a[i]] = i; // position of a[i] will be i
        }
        for (int i = 1; i <= n; i++)
        {
            if (!k) // no more swapping can be done
                break;
            else
            {
                if (a[i] != n - i + 1)
                {
                    k--;
                    a[pos[n - i + 1]] = a[i];
                    pos[a[i]] = pos[n - i + 1]; // swapping a[i]'s and a[n-i+1]'s positions
                    a[i] = n - i + 1;
                    pos[a[i]] = i;
                }
            }
        }
        for (int i = 1; i <= n; i++) // output array after swapping is done
            cout << a[i] << " ";
    }
}

int main()
{

#define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("output1.txt ", "w", stdout);
    auto start = chrono::high_resolution_clock::now();
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
        cout << endl;
    }

#ifdef LOCAL
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    auto startT = chrono::system_clock::to_time_t(start);
    // cout << "\n\n" << ctime(&startT) << (double)duration.count() / 1000 << " seconds\n";
#endif

    return 0;
}