#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    int t; cin >> t;
    while(t--) {
        vector<int> a(10000005, 0);
        int n; cin >> n;
        int x, minn, maxx;
        for(int i = 0; i < n; i++) {
            cin >> x;
            if(i == 0) {
                minn = x;
                maxx = x;
            }
            minn = min(minn, x);
            maxx = max(maxx, x);
            a[x] = 1;
        }

        int flag = 0;
        for(int i = minn+1; i <= maxx; i++) {
            if(a[i]) {
                flag = 1;
                cout << minn << " " << i << " ";
                break;
            }
        }
        if(flag == 0) cout << -1;
        cout << "\n";
    }
}