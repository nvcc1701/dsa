// #include <iostream>
// using namespace std;

// int n, a[100];

// void print(int t[], int n) {
//     cout << "[";
//     for(int i = 1; i <= n - 1; i++) {
//         if(i == n-1) cout << t[i];
//         else cout << t[i] << ", ";
//     }
//     cout << "]";
// }

// void back_track(int a[], int n) {
//     int t[100], s = n-1;
//     if(s == 0) return;
//     for(int i = 1; i <= s; i++) t[i] = a[i] + a[i+1];
//     print(t, n); cout << endl;
//     return back_track(t, s);
// }

// int main() {
//     int t; cin >> t;
//     while(t--) {
//         cin >> n;
//         for(int i = 1; i <= n; i++) cin >> a[i];
//         back_track(a, n);
//     }
// }

#include <iostream>
using namespace std;
int a[100][100], n;

void print() {
    for(int i = n; i >= 1; i--) {
        cout << "[";
        for(int j = 1; j <= i; j++) {
            if(j == i) cout << a[i][j] << "]";
            else cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void back_track(int t) {
    if(t == 0) { 
        print(); return;
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