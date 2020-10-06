#include <iostream>
#include <math.h>
using namespace std;

int n, x , a[1005];

void bubbleSort() {
    int temp;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(abs(a[j] - x) > abs(a[j+1] - x)) {
                temp = a[j]; a[j] = a[j+1]; a[j+1] =temp;
            }
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> x;
        for(int i = 0; i < n; i++) cin >> a[i];
        bubbleSort();
        for(int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
}