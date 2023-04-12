#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

string s;
void run_case()
{
    getline(cin, s);
    stringstream ss(s);

    ss >> s;

    for (auto &x : s)
        x = toupper(x);
    string s2 = s;

    string s1 = "";
    while (ss >> s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (i == 0)
                s1.push_back(toupper(s[i]));
            else
                s1.push_back(tolower(s[i]));
        }
        if (ss.tellg() == -1 || ss.peek() == '\n')// kiem tra xem con tro o vi tri cuoi cung chua/ phan tu ke tiep la \n chua
        {
            s1.push_back(',');
        }
        else
            s1.push_back(' ');
    }

    cout << s1 << " " << s2 << endl;
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
    cin >> Test;
    cin.ignore();
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}