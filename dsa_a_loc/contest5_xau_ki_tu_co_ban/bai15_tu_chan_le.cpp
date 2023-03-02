#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int i = 1;
    stringstream ss(s);
    while (ss >> s)
    {
        if (i % 2 == 0)
        {
            for (int j = s.length() - 1; j >= 0; j--)
                cout << s[j];
            cout << " ";
        }
        else
        {
            cout << s << " ";
        }
        ++i;
    }

    return 0;
}