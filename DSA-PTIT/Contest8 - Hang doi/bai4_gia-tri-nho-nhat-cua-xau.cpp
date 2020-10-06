#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long k; string s;
        cin >> k >> s;
        priority_queue<long long, vector<long long> > pq;
        long long d[300] = {0};
        
        for(int i = 0; i < s.size(); i++) d[s[i]]++;
        for(int i = 0; i < 300; i++) if(d[i] > 0) pq.push(d[i]);

        while(pq.size() > 0 && k >0) {
            long long top = pq.top(); pq.pop();
            k--;
            top--;
            pq.push(top);
        }

        long long res = 0;
        while(pq.size() > 0) {
            res += pq.top() * pq.top();
            pq.pop();
        }
        
        cout << res << endl;
    }

    return 0;
}