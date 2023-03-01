#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        long long a, l, r;
        int d[1005] = {0};
        for(int i = 0; i < n; i++) {
            cin >> a;
            if(i == 0) l = r = a;
            l = min(l, a);
            r = max(r , a);
            d[a] = 1;
        }

        long long res = 0;
        for(long long i = l; i <= r; i++) {
            if(d[i] == 0)
                res++;
        }
        cout << res << '\n';
    }
    return 0;
}