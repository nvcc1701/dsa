#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
  
bool isSmaller(string s1, string s2) {
    int n1 = s1.length(), n2 = s2.length();

    if(n1 < n2) return true;
    else if(n1 > n2) return false;

    for(int i = 0; i < n1; i++) {
        if(s1[i] < s2[i]) return true;
        else if(s1[i] > s2[i]) return false;
    }
    return false;
}

string findDiff(string s1, string s2) {
    if(isSmaller(s1, s2)) swap(s1, s2);
    string s = "";

    int n1 = s1.length(), n2 = s2.length();
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    int carry = 0;

    for(int i = 0; i < n2; i++) {
        int sub = ((s1[i]-'0') - (s2[i]-'0') - carry);
        if(sub < 0) {
            sub += 10;
            carry = 1;
        } else carry = 0;
        s.push_back(sub + '0');
    }
    for(int i = n2; i < n1; i++) {
        int sub = ((s1[i]-'0') - carry);
        if(sub < 0) {
            sub += 10;
            carry = 1;
        } else carry = 0;
        s.push_back(sub + '0');
    }
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    int t; cin >> t;
    while(t--) {
        string s1, s2; 
        cin >> s1 >> s2;
        cout << findDiff(s1, s2) << "\n";
    }
}