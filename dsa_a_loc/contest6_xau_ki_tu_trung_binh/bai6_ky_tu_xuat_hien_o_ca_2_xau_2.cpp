#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    set<char> set1;
    set<char> set2;
    for (auto i : s1)
        set1.insert(i);
    for (auto i : s2)
        set2.insert(i);

    set<char> res;

    set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(res, res.begin()));
    for (auto i : res)
        cout << i;
    cout << endl;
    res.clear();
    set_difference(set2.begin(), set2.end(), set1.begin(), set1.end(), inserter(res, res.begin()));
    for (auto i : res)
        cout << i;
}