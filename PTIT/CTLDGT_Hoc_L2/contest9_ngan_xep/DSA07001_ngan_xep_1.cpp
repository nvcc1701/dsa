#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

string s;
vector<int> stk;
void run_case()
{
    stk.clear();
    string s1, s2;
    while (getline(cin, s))
    {
        stringstream ss(s);
        ss >> s1;
        if (s1 == "push")
        {
            ss >> s2;
            stk.push_back(stoi(s2));
        }
        else if (s1 == "show")
        {
            if (stk.size() == 0)
            {
                cout << "empty\n";
            }
            else
            {
                for (auto x : stk)
                    cout << x << " ";
                cout << endl;
            }
        }
        else
        {
            if (stk.size() > 0)
            {
                stk.pop_back();
            }
        }
    }
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
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}