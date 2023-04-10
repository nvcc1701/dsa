#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

char c;
int check[200];
int n;
string s;

void init()
{
    cin >> c;
    n = c - 'A';
    n++;
    memset(check, 0, sizeof(check));
}

bool Check()
{
    if (s.find("AE") != string::npos)
        return true;
    if (s.find("EA") != string::npos)
        return true;
    if (s[0] != 'A' && s[s.size() - 1] != 'A')
        return false;

    if (s.find("E") != string::npos)
    {
        if (s.find("E") != 0 && s.find("E") != s.size() - 1)
            return false;
    }

    return true;
}

void Try()
{
    for (char j = 'A'; j <= c; j++)
    {
        if (s.size() == n)
        {
            if (Check())
                cout << s << endl;
            return;
        }

        if (!check[j])
        {
            check[j] = 1;
            s.push_back(j);
            Try();
            s.pop_back();
            check[j] = 0;
        }
    }
}

void run_case()
{
    init();
    Try();
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