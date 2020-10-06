#include <iostream>
using namespace std;

int a[15][15], n, m, kt; string result;

void input() {
    for(int i = 1; i <= n; i++) for(int j = 1; j <= n; j++) cin >> a[i][j];
}

void print(int m) {
    for(int i = 0; i < m; i++) cout << result[i];
    cout << " ";
}

void process(int i, int j, int m) {
    if(i == n && j == n) {
        kt = 1; print(m); return;
    }
    if(i < n && a[i+1][j] == 1) {
        result[m] = 'D'; 
        process(i+1, j, m+1);
    }
    if(j < n && a[i][j+1] == 1) {
        result[m] = 'R';
        process(i, j+1, m+1);
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n; m = 0; kt = 0;
        input();
        if(a[1][1] != 0 && a[n][n] != 0) process(1, 1, m);
        if(kt == 0) cout << -1;
        cout << endl;
    }
}