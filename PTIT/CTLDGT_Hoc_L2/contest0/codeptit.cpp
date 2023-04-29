#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        long long n;
        cin >> s >> n;

        // Tính độ dài của xâu F(s)
        string fs = s;
        while (fs.length() < n)
        {
            char last_char = fs[fs.length() - 1];
            fs = last_char + fs.substr(0, fs.length() - 1);
            fs += last_char;
        }

        // Tính độ dài của xâu F(F(s))
        string ffs = fs;
        while (ffs.length() < n)
        {
            string rotate_fs =
                ffs.substr(ffs.length() - s.length(), s.length()) + ffs.substr(0, ffs.length() - s.length());
            char last_char = rotate_fs[rotate_fs.length() - 1];
            ffs = last_char + ffs.substr(0, ffs.length() - s.length() - 1);
            ffs += rotate_fs;
        }

        // Tính kí tự thứ N của xâu X
        if (n <= s.length())
        {
            cout << s[n - 1] << endl;
        }
        else if (n <= fs.length())
        {
            cout << fs[n - s.length() - 1] << endl;
        }
        else
        {
            cout << ffs[n - fs.length() - s.length() - 1] << endl;
        }
    }
    return 0;
}
