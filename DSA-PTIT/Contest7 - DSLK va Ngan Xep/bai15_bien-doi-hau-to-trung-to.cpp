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
                string a = stk.top(); stk.pop();
                string b = stk.top(); stk.pop();
                string temp = '(' + b + s[i] + a + ')';
                stk.push(temp);
            } else stk.push(string(1, s[i]));
        }

        cout << stk.top() << endl;
    }
}