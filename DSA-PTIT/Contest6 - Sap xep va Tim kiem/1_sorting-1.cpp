#include <iostream>
using namespace std;

int n, a[1005], b[1005];

void selection_sort() {
    int min_index, tmp;
    for(int i = 0; i < n-1; i++) {
        min_index = i;
        for(int j = i+1; j < n; j++) {
            if(a[min_index] > a[j]) min_index = j;
        }
        tmp = a[i]; a[i] = a[min_index]; a[min_index] = tmp;
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) b[i] = true;
        selection_sort();
        for(int i = 0; i < n; i++) {
            if(b[n-i-1]){
                cout << a[n-i-1] << " ";
                b[n-i-1] = false;
            } 
            if(b[i]) {
                cout << a[i] << " ";
                b[i] = false;
            } 
        }
        cout << endl;
    }
}