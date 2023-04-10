#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
vector<int> v;
stack<vector<int>> st;

void init()
{
    cin >> n;
    int x;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
}

void Try(int n)
{
    if (n > 0)
    {
        vector<int> v_copy = v;
        st.push(v_copy);
        for (int i = 0; i < n; i++)
            v[i] = v[i] + v[i + 1];
        v.pop_back();
        Try(n - 1);
    }
}

void run_case()
{
    init();
    Try(n);

    while (!st.empty())
    {
        auto x = st.top();
        st.pop();
        cout << "[";
        for (int i = 0; i < x.size(); i++)
        {
            if (i == x.size() - 1)
                cout << x[i];
            else
                cout << x[i] << " ";
        }
        cout << "] ";
    }
    cout << endl;
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