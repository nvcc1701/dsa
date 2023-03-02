#include <iostream>
#include <sstream>
#include <set>
#include <map>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    set<string> set;
    map<string, int> map;
    string tmp;

    while (ss >> tmp)
    {
        set.insert(tmp);
    }

    for (auto it : set)
    {
        cout << it << " ";
        map[it] = 0;
    }

    cout << endl;

    stringstream ss1(s);
    while (ss1 >> tmp)
    {
        if (map[tmp] == 0)
        {
            cout << tmp << " ";
            map[tmp]++;
        }
    }
}