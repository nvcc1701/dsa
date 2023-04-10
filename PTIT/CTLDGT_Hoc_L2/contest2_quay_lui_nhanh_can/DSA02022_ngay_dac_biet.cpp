#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
string s;
void init()
{
    n = 7;
    s = "";
    // 22022022
    // 00001000
}

void check()
{
    string s1 = s;
    s1.insert(s1.begin() + 4, '2');

    if (s1[1] == '0' && s1[0] == '0')
        return;
    if (s1[2] != '0' || s1[3] == '0')
        return;

    // int i = 0, j = 7;
    // while (i < j)
    // {
    //     if (s1[i] != s1[j])
    //         return;
    //     i++;
    //     j--;
    // }

    s1.insert(s1.begin() + 2, '/');
    s1.insert(s1.begin() + 5, '/');

    cout << s1 << endl;
}

void Try()
{
    for (int j = 0; j <= 1; j++)
    {
        if (s.size() == n)
        {
            check();
            return;
        }
        else
        {
            if (j == 0)
                s.push_back(static_cast<char>(j + '0'));
            else
                s.push_back('2');
            Try();
            s.pop_back();
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