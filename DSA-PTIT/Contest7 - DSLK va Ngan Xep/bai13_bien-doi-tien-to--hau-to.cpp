#include <iostream>
#include <stack>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        stack<string> stk;

        for(int i = s.size()-1; i >= 0; i--) {
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
                string fi = stk.top(); stk.pop();
                string se = stk.top(); stk.pop();
                string tmp = fi + se + s[i];
                stk.push(tmp);
            } else stk.push(string(1, s[i]));
        }

        cout << stk.top() << endl;
    }
}