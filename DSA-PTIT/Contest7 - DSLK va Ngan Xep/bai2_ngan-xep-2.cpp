#include <iostream>
#include <stack>
using namespace std;

int main() {
    int q, n; cin >> q;
    string s;
    stack<int> stk;
    while(q--) {
        cin >> s;
        if(s == "PUSH") {
            cin >> n;
            stk.push(n);
        } else if(s == "POP" && stk.size() > 0) {
            stk.pop();
        } else if(s == "PRINT") {
            if(stk.size() == 0) cout << "NONE";
            else cout << stk.top();
            cout << endl;
        }
    }
}