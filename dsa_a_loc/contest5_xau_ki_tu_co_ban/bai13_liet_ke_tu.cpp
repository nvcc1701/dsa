#include <iostream>
#include <sstream>
using namespace std;

std::string trim(std::string s)
{
    size_t first = s.find_first_not_of(" \t\n\r");
    size_t last = s.find_last_not_of(" \t\n\r");
    if (first == std::string::npos || last == std::string::npos)
    {
        return "";
    }
    return s.substr(first, last - first + 1);
}

int main()
{
    string S, word;
    getline(cin, S);

    stringstream ss(S);
    while (getline(ss, word, ' '))
    {
        for (int i = 0; i < word.length(); i++)
        {
            if (isalpha(word[i]))
                cout << word[i];
        }
        cout << " ";
    }
    return 0;
}