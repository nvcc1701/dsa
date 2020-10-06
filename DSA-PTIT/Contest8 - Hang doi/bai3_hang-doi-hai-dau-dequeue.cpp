#include <iostream>
#include <queue>
using namespace std;

int main() {
    int q; cin >> q;
    deque<int> dq;
    string s;
    while(q--) {
        cin >> s;
        if(s == "PUSHBACK") {
            int n; cin >> n;
            dq.push_back(n);
        } else if(s == "PUSHFRONT") {
            int n; cin >> n;
            dq.push_front(n);
        } else if(s == "PRINTFRONT") (dq.size() > 0) ? cout << dq.front() << endl : cout << "NONE\n";
        else if(s == "PRINTBACK") (dq.size() > 0) ? cout << dq.back() << endl : cout << "NONE\n";
        else if(s == "POPFRONT" && dq.size() > 0) dq.pop_front();
        else if(s == "POPBACK" && dq.size() > 0) dq.pop_back();
    }

    return 0;
}