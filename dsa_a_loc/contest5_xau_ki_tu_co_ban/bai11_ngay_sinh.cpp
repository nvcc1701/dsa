#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
    string s;
    cin >> s;

    stringstream ss(s);
    int d, m, y;
    ss >> d;
    ss.ignore();
    ss >> m;
    ss.ignore();
    ss >> y;
    ss.ignore();

    stringstream res;
    res << setfill('0') << setw(2) << d << "/" << setfill('0') << setw(2) << m << "/" << setfill('0') << setw(2) << y;
    cout << res.str();
    return 0;
}