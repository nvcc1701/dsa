#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
int a[11];
bool c[11];

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (c[j])
        {
            if (i > 1)
            {
                if (abs(a[i - 1] - j) == 1)
                    continue;
                a[i] = j;
            }
            else if (i == 1)
            {
                a[i] = j;
            }

            if (i == n)
            {
                for (int i = 1; i <= n; i++)
                    cout << a[i];
                cout << endl;
            }
            else
            {
                c[j] = false;
                Try(i + 1);
                c[j] = true;
            }
        }
    }
}



// void Try(int i)
// {
//     for (int j = 1; j <= n; j++)
//     {
//         if (c[j])
//         {
//             a[i] = j;

//             if (i == n)
//             {
//                 for (int k = 1; k <= n; k++)
//                     cout << a[k];
//                 cout << endl;
//             }
//             else
//             {
//                 c[j] = false;
//                 Try(i + 1);
//                 c[j] = true;
//             }
//         }
//     }
// }

void run_case()
{
    cin >> n;
    memset(c, true, sizeof(c));
    Try(1);
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