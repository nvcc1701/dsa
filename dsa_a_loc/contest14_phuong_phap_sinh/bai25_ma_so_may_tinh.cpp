#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
string s = "";
bool final_c = false;
string sn;
vector<string> v;
vector<string> v_char;

void init()
{
    cin >> n;
    sn.resize(n);
    char c = 'A';
    int i = 0;
    while (i < n)
    {
        s.push_back(c);
        c++;
        i++;
    }
}

void gen_char()
{
    // 1 2 3 6 9 8 7 5 4
    int n = s.size();
    int i = n - 2;
    while (i >= 0 && s[i] > s[i + 1])
        i--;

    if (i == -1)
    {
        final_c = true;
    }
    else
    {
        int j = n - 1;
        while (s[i] > s[j])
            j--;
        swap(s[i], s[j]);
        reverse(s.begin() + i + 1, s.end());
    }
}

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        sn[i] = j + '0';
        if (i == n - 1)
        {
            v.push_back(sn);
        }
        else
        {
            Try(i + 1);
        }
    }
}

void run_case()
{
    init();

    while (!final_c)
    {
        v_char.push_back(s);
        gen_char();
    }
    Try(0);

    for (auto x : v_char)
    {
        for (auto y : v)
        {
            cout << x << y << endl;
        }
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