#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string res1 = "";
    string res2 = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
            res1 += s[i];
        else
            res2 += s[i];
    }

    cout << res1 << endl;
    cout << res2;
    return 0;
}