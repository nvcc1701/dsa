#include <iostream>
using namespace std;

int n, k, sum, kt, a[100];

void process() {
    for(int i = 0; i < n; i++) sum += a[i];
    if(sum % k == 0) {
        int check = sum / k;
        for(int i = 0; i < n; i++) if(a[i] <= check) kt = 1;
    } else {
        kt = 0;
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> k; for(int i = 0; i < n; i++) cin >> a[i];
        sum = 0, kt = 0;
        process();
        if(kt == 1) cout << 1; else cout << 0;
        cout << endl;
    }
}