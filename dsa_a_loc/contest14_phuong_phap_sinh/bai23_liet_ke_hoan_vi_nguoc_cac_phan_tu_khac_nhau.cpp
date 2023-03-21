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
set<int> se;
vector<int> a;

void init()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        se.insert(x);
    }

    a.assign(se.begin(), se.end());
    n = a.size();
}

// 1 2 3 6 9 8 7 5 4
// 1 2 3 7 4 5 6 8 9
void generate()
{
    int i = n - 2;
    while (i >= 0 && a[i] > a[i + 1])
        i--;

    if (i == -1)
    {
        final = true;
    }
    else
    {
        int j = n - 1;
        while (a[i] > a[j])
            j--;
        swap(a[i], a[j]);
        reverse(a.begin() + i + 1, a.end());
    }
}

void run_case()
{
    init();
    vector<string> v;

    while (!final)
    {
        string s = "";
        for (int i = 0; i < n; i++)
        {
            s += to_string(a[i]);
            s += " ";
        }

        v.push_back(s);

        generate();
    }

    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
        cout << endl;
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
    cout << "\n\nExecution time: " << (double)duration.count() / 1000 << " seconds\n";
#endif

    return 0;
}