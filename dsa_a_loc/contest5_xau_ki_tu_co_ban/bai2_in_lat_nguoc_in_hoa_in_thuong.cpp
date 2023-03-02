#include <bits/stdc++.h>
using namespace std;

string reverse(string s)
{
    string ss;
    for (int i = s.size() - 1; i >= 0; i--)
        ss.push_back(s[i]);
    return ss;
}

string normalize(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}

string capitalize(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = toupper(s[i]);
    }
    return s;
}

int main()
{
    string s;
    cin >> s;

    cout << reverse(s) << endl;
    cout << normalize(s) << endl;
    cout << capitalize(s) << endl;
    return 0;
}