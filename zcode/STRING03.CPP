#include <iostream>
#include <string>
using namespace std;

string standardlizeString(string s) {
    int n = s.length();
    for(int i = 0; i < n; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') s[i]+=32;
    }

    int i = 0;
    while(i != n) {
        while(s[i] == ' ' && s[i+1] == ' ') {
            for(int j = i; j < n; j++) s[j] = s[j+1];
        }
        i++;
    }

    s[0]-=32; int dem = -1;
    for(int i = 1; i < n; i++) {
        if(s[i] == ' ' && s[i+1] != ' ') {
            s[i+1]-=32;
            dem = i;
        }
    }  
    s.insert(dem, ",");
    for(int i = dem+1; i < s.length(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') s[i]-=32;
    }
    return s;
}

int main() {
    string s; 
    getline(cin, s);
    cout << standardlizeString(s);
}