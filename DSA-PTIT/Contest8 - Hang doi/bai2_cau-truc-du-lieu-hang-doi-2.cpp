#include <iostream>
#include <queue>
using namespace std;

int main() {
    int q; cin >> q;
    queue<int> queue;
    string s, val;
    while(q--) {
        while(cin >> s) {
            if(s == "PUSH") {
                int n; cin >> n;
                queue.push(n);
            } else if(s == "PRINTFRONT") {
                if(queue.size() > 0) cout << queue.front() << '\n';
                else cout << "NONE\n";
            } else if(s == "POP") {
                if(queue.size() > 0) queue.pop();
            }
            val = s;
        }
    }
}