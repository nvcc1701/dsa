#include <iostream>
#include <string.h>
using namespace std;

int n, chuaxet[100];
long c[20][20], x[100], s = 0, MIN = 9999999, cmin = 9999999;

void input() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> c[i][j]; 
            if(c[i][j] != 0) cmin = min(cmin, c[i][j]);
        }
    }
}

void Try(int i) {
    if(s + cmin * (n-i+1) >= MIN) return;
    for(int j = 1; j <= n; j++) {
        if(chuaxet[j]) {
            x[i] = j;
            chuaxet[j] = 0;
            s += c[x[i-1]][x[i]];
            if(i == n) {
                if(s + c[x[n]][x[1]] < MIN) MIN = s + c[x[n]][x[1]];
            } else Try(i+1);
            s -= c[x[i-1]][j];
            chuaxet[j] = 1;
        }
    }
}

int main() {
    memset(chuaxet, 1, sizeof(chuaxet));
    chuaxet[1] = 0; x[1] = 1;
    input(); Try(2);
    cout << MIN;
    return 0;
}