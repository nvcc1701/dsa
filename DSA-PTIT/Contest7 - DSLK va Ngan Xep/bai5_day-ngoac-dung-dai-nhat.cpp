#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        stack<int> stk;
        stk.push(-1);
        int res = 0;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') stk.push(i);
            else {
                stk.pop();
                if(stk.size() > 0) res = max(res, i-stk.top());
                else if(stk.size() == 0) stk.push(i);
            }
        }
        cout << res << endl;
    }
}