#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.first.size() == b.first.size())
        return a.second > b.second;
    return a.first.size() < b.first.size();
}

int isReverable(string s)
{
    int l = 0;
    int r = s.size() - 1;
    while (l < r)
    {
        if (s[l] != s[r])
            return 0;
        l++;
        r--;
    }

    return 1;
}

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);

    vector<pair<string, int>> v;
    int i = 0;
    while (ss >> s)
    {
        if (isReverable(s))
        {
            pair<string, int> p;
            p.first = s;
            p.second = i++;
            v.push_back(p);
        }
    }

    sort(begin(v), end(v), cmp);
    for (auto it : v)
        cout << it.first << " ";
    return 0;
}
