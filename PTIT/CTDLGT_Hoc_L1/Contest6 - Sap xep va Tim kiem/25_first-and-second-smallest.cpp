#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        long long a, minn, maxx;
        vector<long long> d(10000000, 0);
        for(int i = 0; i < n; i++) {
            cin >> a;
            if(i == 0) minn = a;
            minn = min(minn, a);
            maxx = max(maxx, a);
            d[a]++;
        }

        int check = 0;
        if(d[minn] == n) cout << -1;
        else {
            for(int i = minn; i <= maxx, check < 2; i++) {
                if(d[i] != 0) {
                    cout << i << " ";
                    check++;
                } 
            }
        }
        cout << endl;
    }
}