#include <iostream>
#include <sstream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    string s, tmp;
    getline(cin, s);
    stringstream ss(s);

    map<string, int> mp;
    while (ss >> tmp)
        mp[tmp]++;

    vector<pair<string, int>> v;
    for (auto it : mp)
    {
        pair<string, int> p;
        p.first = it.first;
        p.second = it.second;
        v.push_back(p);
    }

    for (auto it : v)
        cout << it.first << " " << it.second << endl;

    cout << endl;
    ss.clear();
    ss.str(s);
    map<string, int> check;
    while (ss >> s)
    {
        if (!check[s])
        {
            cout << s << " " << mp[s] << endl;
            check[s]++;
        }
    }

    return 0;
}