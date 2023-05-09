#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void run_case()
{
    vector<int> stk;
    int n;
    cin >> n;
    cin.ignore();
    string s;
    while (n--)
    {
        getline(cin, s);
        stringstream ss(s);

        string s1, s2;
        ss >> s1;
        if (s1 == "show")
        {
            if (stk.size() > 0)
            {
                for (auto x : stk)
                    cout << x << " ";
            }
            else
                cout << "EMPTY";
            cout << endl;
        }
        else if (s1 == "push")
        {
            ss >> s2;
            stk.push_back(stoi(s2));
        }
        else
        {
            if (stk.size() > 0)
                stk.pop_back();
        }
    }
}

int main()
{

#define LOCAL

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