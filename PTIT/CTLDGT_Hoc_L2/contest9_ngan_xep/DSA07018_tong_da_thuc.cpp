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
void run_case()
{
    getline(cin, s1);
    getline(cin, s2);

    for (auto &x : s1)
    {
        if (x == '+')
            x = ' ';
    }

    for (auto &x : s2)
    {
        if (x == '+')
            x = ' ';
    }

    vector<string> se;
    set<string> check;

    map<string, int> mp1;
    stringstream ss(s1);

    while (ss >> s1)
    {
        pair<string, int> p;
        string tmp = "";
        for (auto x : s1)
        {
            if (x == '*')
            {
                p.second = stoi(tmp);
                tmp = "";
            }
            tmp += x;
        }
        p.first = tmp;
        if (!check.count(tmp))
        {
            se.push_back(tmp);
            check.insert(tmp);
        }
        mp1.insert(p);
    }

    ss.clear();
    ss.str("");
    ss << s2;

    map<string, int> mp2;
    while (ss >> s2)
    {
        pair<string, int> p;
        string tmp = "";
        for (auto x : s2)
        {
            if (x == '*')
            {
                p.second = stoi(tmp);
                tmp = "";
            }
            tmp += x;
        }
        p.first = tmp;
        if (!check.count(tmp))
        {
            se.push_back(tmp);
            check.insert(tmp);
        }
        mp2.insert(p);
    }

    sort(se.begin(), se.end(), [](string a, string b) {
        int st = 3;
        string n1 = "";
        while (st < a.size())
        {
            n1 += string(1, a[st]);
            st++;
        }

        st = 3;
        string n2 = "";
        while (st < b.size())
        {
            n2 += string(1, b[st]);
            st++;
        }

        return stoi(n1) > stoi(n2);
    });

    string res = "";
    for (auto x : se)
    {
        mp1[x] += mp2[x];
        res += to_string(mp1[x]) + x + " + ";
    }

    res[res.size() - 2] = ' ';
    cout << res << endl;
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
    cin.ignore();
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}