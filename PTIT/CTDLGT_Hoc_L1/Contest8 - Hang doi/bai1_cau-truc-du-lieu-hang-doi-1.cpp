#include <iostream>
#include <queue>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        queue<int> queue;
        int q; cin >> q;
        string val = "0";
        while(q--) {
            string s; cin >> s;
            if(s == "1") cout << queue.size() << '\n';
            else if(s == "2") (queue.size() > 0) ? cout << "NO\n" : cout << "YES\n";
            else if(s == "3") {
                int n; cin >> n;
                queue.push(n);
            }
            else if(s == "4" && queue.size() > 0) queue.pop();
            else if(s == "5") (queue.size() > 0) ? cout << queue.front() << '\n' : cout << "-1\n";
            else if(s == "6") (queue.size() > 0) ? cout << queue.back() << '\n' : cout << "-1\n";
            val = s;
        }
        if(val == "3" || val == "4") cout << '\n';
    }
    return 0;
}