#include <iostream>
#include <set>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    set<string> se;
    // vector<string> v;
    stringstream ss(s);
    while (ss >> s)
        se.insert(s);

    // for (auto it : se)
    //     v.push_back(it);

    cout << se.size() << endl;
    cout << *se.begin() << " " << *se.rbegin();
    return 0;
}