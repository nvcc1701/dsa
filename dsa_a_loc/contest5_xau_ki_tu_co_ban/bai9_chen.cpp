#include <iostream>
using namespace std;

int main()
{
    string s;
    int k;
    cin >> s >> k;

    s.insert(k, "28tech");
    cout << s;
    return 0;
}