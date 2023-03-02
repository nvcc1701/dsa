#include <iostream>
using namespace std;

int k, n; string s;

void selectionSort() {
    int i, j, max_index;
    for(int i = 0; i < n-1; i++) {
        max_index = i;
        for(int j = i+1; j < n && k > 0; j++) {
            if(s[j] >= s[max_index]) max_index = j;
        }
        if(s[max_index] != s[i]) {
            swap(s[max_index], s[i]); k--;
        }
        if(k == 0) break;
    }
    for(int i = 0; i < n; i++) cout << s[i];
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> k; cin >> s;
        n = s.length();
        selectionSort(); cout << endl;
    }
}