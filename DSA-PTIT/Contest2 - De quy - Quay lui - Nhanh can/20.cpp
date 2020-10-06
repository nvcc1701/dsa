#include <iostream>
using namespace std;
int a[100][100], n;

void print() {
    for(int i = n; i <= n; i++) {
        cout << "[";
        for(int j = 1; j <= i; j++) {
            if(j == i) cout << a[i][j] << "]";
            else cout << a[i][j] << " ";
        }
        cout << " ";
    }
}

void back_track(int t) {
    if(t == 0) { 
        print(); cout << endl; return;
    }
    for(int i = 1; i <= t-1; i++) a[t-1][i] = a[t][i] + a[t][i+1];
    back_track(t-1);
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[n][i];
        back_track(n);
    }
}