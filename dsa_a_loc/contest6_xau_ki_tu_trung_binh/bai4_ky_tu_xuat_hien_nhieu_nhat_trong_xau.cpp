#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b)
{
    if (a.second == b.second)
        return a.first > b.first;
    return a.second > b.second;
}

bool cmp2(pair<char, int> a, pair<char, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

int main()
{
    map<char, int> mp;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        mp[s[i]]++;

    vector<pair<char, int>> v;
    for (auto it : mp)
        v.push_back(it);

    sort(v.begin(), v.end(), cmp);

    cout << v[0].first << " " << v[0].second << endl;

    sort(v.begin(), v.end(), cmp2);

    cout << v[v.size() - 1].first << " " << v[v.size() - 1].second;

    return 0;
}