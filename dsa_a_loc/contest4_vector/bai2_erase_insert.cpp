#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int m;
vector<int> v;
int n;

void run_case()
{
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    string s;
    cin >> n;
    while (n-- > -1)
    {
        getline(cin, s);
        stringstream ss(s);

        ss >> s;
        if (s == "1")
        {
            string a, b;
            ss >> a;
            ss >> b;
            try
            {
                v.insert(v.begin() + stoi(a), stoi(b));
            }
            catch (exception &e)
            {
                cerr << e.what() << '\n';
            }
        }
        else
        {
            string a, b;
            ss >> a;

            try
            {
                v.erase(v.begin() + stoi(a));
            }
            catch (exception &e)
            {
                cerr << e.what() << '\n';
            }
        }
    }

    for (auto x : v)
        cout << x << " ";
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