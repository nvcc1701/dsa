#include <iostream>
#include <stack>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        stack<string> stk;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
                string se = stk.top(); stk.pop();
                string fi = stk.top(); stk.pop();
                string tmp = s[i] + fi + se;
                stk.push(tmp);
            } else stk.push(string(1, s[i]));
        }

        cout << stk.top() << endl;
    }
}