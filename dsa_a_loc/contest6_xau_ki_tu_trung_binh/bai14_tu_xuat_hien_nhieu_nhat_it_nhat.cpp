#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

int main()
{
    string s;
    getline(cin, s);
    vector<pair<string, int>> v;
    map<string, int> mp;
    stringstream ss(s);
    while (ss >> s)
        mp[s]++;

    for (auto it : mp)
    {
        pair<string, int> p;
        p.first = it.first;
        p.second = it.second;
        v.push_back(p);
    }

    sort(begin(v), end(v), cmp);

    cout << v[0].first << " " << v[0].second << endl;
    cout << v[v.size() - 1].first << " " << v[v.size() - 1].second;
    return 0;
}