#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct dta {
    int val, pos;
};

bool cmp(dta a, dta b) {
    if(a.val < b.val) return true;
    if(a.val == b.val && a.pos < b.pos) return true;
    return false;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<dta> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i].val;
            a[i].pos = i;
        }

        sort(a.begin(), a.end(), cmp);

        int res = 0;
        for(int i = 0; i < n; i++) {
            while(a[i].pos != i) {
                res++;
                swap(a[i], a[a[i].pos]);
            }
        }
        cout << res << endl;
    }
}