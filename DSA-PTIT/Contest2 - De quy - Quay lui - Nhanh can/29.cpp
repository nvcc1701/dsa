#include <iostream>
using namespace std;

int m, n, dem, a[100][100];

void process(int i, int j) {
    if(i == m-1 && j == n-1) {
        dem++; return;
    }
    if(i < m-1) {
        process(i+1, j);
    }
    if(j < n-1) {
        process(i, j+1);
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> m >> n; for(int i = 0; i < m; i++) for(int j = 0; j < n; j++) cin >> a[i][j];
        dem = 0;
        process(0, 0); cout << dem << endl;
    }
}