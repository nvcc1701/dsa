#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string s; stack<char> stk;
        getline(cin, s);
        for(int i = 0; i < s.size(); i++) {
            while(s[i] != ' ' && i < s.size()) stk.push(s[i++]);
            while(stk.size() > 0) {
                cout << stk.top();
                stk.pop();
            }
            if(s[i] == ' ') cout << s[i];
        }
        cout << endl;
    }
}