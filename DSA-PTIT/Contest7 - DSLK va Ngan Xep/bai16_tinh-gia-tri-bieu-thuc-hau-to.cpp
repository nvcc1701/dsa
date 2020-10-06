#include <iostream>
#include <stack>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        stack<long long> stk;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
                long long a = stk.top(); stk.pop();
                long long b = stk.top(); stk.pop();
                long long temp;
                if(s[i] == '+') temp = b+a;
                else if(s[i] == '-') temp = b-a;
                else if(s[i] == '*') temp = b*a;
                else if(s[i] == '/') temp = b/a;
                stk.push(temp);
            } else stk.push((long long)(s[i] -'0'));
        }

        cout << stk.top() << endl;
    }
}