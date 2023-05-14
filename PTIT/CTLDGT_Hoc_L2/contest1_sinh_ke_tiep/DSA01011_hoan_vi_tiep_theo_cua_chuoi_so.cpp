#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

string s1, s2;
string generateS()
{
    for (int i = 1; i < s2.size(); i++)
    {
        if (s2[i] > s2[i - 1])
        {
            next_permutation(s2.begin(), s2.end());
            return s2;
        }
    }
    return "BIGGEST";
}

void run_case()
{
    cin >> s1 >> s2;
    string s = generateS();
    cout << s1 << " " << s << endl;
}

int main()
{

// #define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}