#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string name, date;
    getline(cin, name);
    stringstream ss(name);

    while (ss >> name)
    {
        name[0] = toupper(name[0]);
        for (int i = 1; i < name.size(); i++)
            name[i] = tolower(name[i]);
        cout << name << " ";
    }

    cin.ignore();
    getline(cin, date);
    ss.str(date);
    while (ss >> date)
    {
        cout << date << " ";
    }
    return 0;
}