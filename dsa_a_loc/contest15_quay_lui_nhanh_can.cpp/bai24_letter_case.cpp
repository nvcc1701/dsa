#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

string s;

vector<string> v;
vector<int> tmp;
void check()
{
    string ss = s;
    bool ok = true;
    for (int i = 0; i < tmp.size(); i++)
    {
        if (isdigit(s[i]) && tmp[i] == 1)
            ok = false;

        if (isalpha(s[i]))
        {
            if (tmp[i] == 1)
            {
                ss[i] = toupper(ss[i]);
            }
            else
            {
                ss[i] = tolower(ss[i]);
            }
        }
    }
    if (ok)
        v.push_back(ss);
}

void Try()
{
    for (int j = 0; j <= 1; j++)
    {
        tmp.push_back(j);
        if (tmp.size() == s.size())
        {
            check();
        }
        else
        {
            Try();
        }
        tmp.pop_back();
    }
}

void run_case()
{
    cin >> s;
    Try();

    sort(v.begin(), v.end());
    for (auto x : v)
        cout << x << endl;
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