#include <set>
#include <iterator>
#include <iostream>
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

    // get intersection
    set<char> res;
    set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(res, res.begin()));
    for (auto i : res)
        cout << i;

    cout << endl;
    
    set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(res, res.begin()));
    for (auto i : res)
        cout << i;
    return 0;
}