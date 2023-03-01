#include <iostream>
#include <math.h>
using namespace std;

int n, k, kt, a[200], b[200];

void process() {
    int sum0 = 0, sum1 = 0;
    for(int i = 0; i < n; i++) {
        if(b[i] == 0) sum0 += a[i];
        if(b[i] == 1) sum1 += a[i];
    }
    if(sum0 == sum1) kt = 1;
}

// void backtrack(int i) {
//     if(kt == 1) return;
//     for(int j = 0; j <= 1; j++) {
//         b[i] = j;
//         if(i == n-1) process();
//         else backtrack(i+1);
//     }
// }

void gen() {
    ++b[n-1];
    for(int i = n-1; i > 0; i--) {
        if(b[i] > 1) {
            ++b[i-1];
            b[i] -= 2;
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n; kt = 0; 
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) b[i] = 0;
        for (int i = 0; i < pow(2, n); i++) {
            if(kt == 1) break;
            process();
            gen();
        }
        if(kt) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}