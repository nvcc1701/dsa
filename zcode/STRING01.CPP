#include <iostream>
#include <string.h>
#include <string>
using namespace std;

string removeWord(string s, string word) {
    if(s.find(word) != string::npos) {
        size_t p = -1;
        
        string temp = word + " ";
        while((p = s.find(word)) != string::npos) {
            s.replace(p, temp.length(), "");
        }

        temp = " " + word;
        while((p = s.find(word)) != string::npos) {
            s.replace(p, temp.length(), "");
        }
    }
    return s;
}

int main() {
    string s, word; 
    getline(cin, s);
    getline(cin, word);
    cout << removeWord(s, word);
}