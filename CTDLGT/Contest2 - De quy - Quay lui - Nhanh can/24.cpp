#include <iostream>
#include <algorithm>
using namespace std;

int n, k, sum, kq, a[15], b[15];

void input() {
    for(int i = 1; i <= n; i++) cin >> a[i];
}

void process() {
    int t = 0, m = 0, c[20]; 
    for(int i = 1; i <= n; i++) t += a[i] * b[i];
    if(t == k) {
        kq = 1;
        for(int i = 1; i <= n; i++) 
            if(b[i]) c[m++] = a[i];
        cout << "["; 
        for(int i = 0; i < m-1; i++) cout << c[i] << " ";
        cout << c[m-1] << "] ";
    }
}

void Try(int i) {
    for(int j = 1; j >= 0; j--) {
        b[i] = j;
        if(i == n) process();
        else Try(i + 1);
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> k; input(); kq = 0;
        sort(a+1, a+n+1);
        Try(1);
        if(kq == 0) cout << "-1";
        cout << endl;
    }
}