#include <iostream>
using namespace std;

int n, k, x[15], ok;

void init() {
    cin >> n;
    k = 1; x[k] = n;
}

void print() {
    cout << '(';
    for(int i = 1; i <= k; i++) {
        if(i != 1 || i != k) cout << x[i] << " ";
        else cout << x[i];
    }
    cout << ') ';   
}

void next_division() {
    int i = k, j, r, s, d;
    while(i > 0 && x[i] == 1) i--;
    if(i > 0) {
        x[i] = x[i]-1; d = k-i+1;
        r = d/x[i]; s = d%x[i];
        k = i;
        if(r > 0) {
            for(j = i+1; j <= i+r; j++) x[j] = x[i];
            k += r;
        }
        if(s > 0) {
            k++; x[k] = s;
        }
    } else ok = 0;
}

int main() {
    int t; cin >> t;
    while(t--) {
        ok = 1;
        init();
        print();
        next_division();
    }
    return 0;
}