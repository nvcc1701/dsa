#include <iostream>
using namespace std;

int n; string a;
bool OK = true;

void reformat() {
    int n = a.length();
    for(int i = n-1; i >= 0; i--) {
        a[i+1] = a[i];
    }
}

void print() {
    for(int i = 1; i <= n; i++) cout << a[i];
    cout << " ";
}

void generate() {
    int j = n-1;
    while(j > 0 && a[j] > a[j+1]) j--;
    if(j > 0) {
        int k = n;
        while(a[j] > a[k]) k--;
        swap(a[j], a[k]);
        int r = j+1, s=n;
        while(r <= s) {
            swap(a[r], a[s]);
            r++; s--;
        }
    } else OK = false;
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> a;
        n = a.length();
        reformat();
        while(OK) {
            print();
            generate();
        }
        OK = true; cout << endl; 
    }
}