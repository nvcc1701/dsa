#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;

bool check(string s)
{
    //()
    // 01
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            st.push(s[i]);
        else if (s[i] == '1')
        {
            if (st.size() > 0)
                st.pop();
            else
                return false;
        }
    }

    return st.size() == 0;
}

void run_case()
{
    cin >> n;

    queue<string> q;
    q.push("0");
    q.push("1");
    vector<string> v;

    while (!q.empty())
    {
        string x = q.front();
        q.pop();
        if (x.size() > n)
            break;
        if (x.size() == n)
            v.push_back(x);

        string sx = x + "0";
        q.push(sx);
        sx = x + "1";
        q.push(sx);
    }

    bool nf = true;

    for (auto x : v)
    {
        if (check(x))
        {
            nf = false;
            for (auto x1 : x)
            {
                if (x1 == '0')
                    cout << '(';
                else
                    cout << ')';
            }
            cout << endl;
        }
    }

    if (nf)
        cout << "NOT FOUND";
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