#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string convertEmail(string s) {
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
    
    i = n-1;
    string email = "";
    while(s[i] != ' ') {
        email += s[i];
        i--;
    }
    reverse(email.begin(), email.end());
    
    email += s[0];
    for(int j = 1; j < i; j++) {
        if(s[j] == ' ') email += s[j+1];
    }

    email += "@ptit.edu.vn";
    return email;
}

int main() {
    string s; 
    getline(cin, s);
    cout << convertEmail(s);
}