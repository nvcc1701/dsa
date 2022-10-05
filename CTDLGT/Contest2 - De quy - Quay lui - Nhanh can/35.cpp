#include <iostream>
using namespace std;

int n, k, s, d, a[100];

void process() {
    int t = 0;
    for(int i = 1; i <= k; i++) t += a[i];
    if(t == s) d++;
}

void Try(int i) {
    for(int j = a[i-1] + 1; j <= n-k+i; j++) {
        a[i] = j;
        if(i == k) process();
        else Try(i+1);
    }
}

int main() {
    while(1) {
        cin >> n >> k >> s;
        if(n == 0 && k == 0 && s == 0) break;
        d = 0; Try(1);
        cout << d << endl;
    }
}