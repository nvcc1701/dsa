#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
bool final = false;
int a[100];
int cnt;

// khoi tao ptu dau tien la n, cnt = 1
void init()
{
    a[1] = n;
    cnt = 1;
}

// 10
//            cnt = 6
//  3 3 1 1 1 1
//  3 2 2 2 1
//    i
void generate()
{
    // duyet tu cuoi ve, cho i = cnt
    int i = cnt;
    while (i >= 1 && a[i] == 1)
    {
        i--;
    }

    if (i == 0)
    {
        final = true;
    }
    else
    {
        a[i]--;
        int d = cnt - i + 1; // tinh so con thieu de tao thanh tong n

        cnt = i; // cho cnt = i, do cac so da bi giam

        int q = d / a[i], r = d % a[i]; // tim so luong so a[i] co the them, tim so du
        for (int j = 1; j <= q; j++)
        {
            a[i + j] = a[i]; // gan cac gia tri = a[i]
        }
        cnt += q; // cap nhat count so chu so

        if (r > 0)
        {
            cnt++;
            a[cnt] = r; //
        }
    }

    // 3
}

void run_case()
{
    cin >> n;

    vector<string> v;

    init();
    while (!final)
    {
        string s = "";
        for (int i = 1; i <= cnt; i++)
        {
            if (i != cnt)
            {
                s += to_string(a[i]) + "+";
            }
            else
                s += to_string(a[i]);
        }
        v.push_back(s);
        generate();
    }

    cout << v.size() << endl;
    for (auto x : v)
    {
        cout << x << endl;
    }
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