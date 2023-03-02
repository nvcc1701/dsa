#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string res = "";
    for (int i = 0; i < s.length(); i++)
    {
        char x = s[i];
        if (x == '2' || x == '8' || x == 't' || x == 'e' || x == 'c' || x == 'h')
            continue;
        else
            res += x;
    }

    if (res.length() != 0)
        cout << res;
    else
        cout << "EMPTY";
    return 0;
}