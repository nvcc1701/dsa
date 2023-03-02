#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int cnt_n, cnt_a, cnt_m;
    cnt_n = cnt_a = cnt_m = 0;

    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
            cnt_n++;
        else if (isalpha(s[i]))
            cnt_a++;
        else
            cnt_m++;
    }

    cout << cnt_a << " " << cnt_n << " " << cnt_m;
    return 0;
}