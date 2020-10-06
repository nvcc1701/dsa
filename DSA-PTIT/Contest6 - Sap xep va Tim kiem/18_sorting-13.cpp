#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector<int> d(n+m);
        for(int i = 0; i < n+m; i++) cin >> d[i];

        sort(d.begin(), d.end());

        for(int i = 0; i < n+m; i++) cout << d[i] << " ";
        cout << endl;
    }
}