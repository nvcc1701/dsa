#include <iostream>
using namespace std;

int n, a[100005];

void swap(int *x, int *y) {
    int temp = *x; *x = *y; *y = temp;
}

void selectionSort() {
    int min_index;
    for(int i = 0; i < n-1; i++) {
        min_index = i;
        for(int j = i+1; j < n; j++) {
            if(a[j] < a[min_index]) min_index = j;
        }
        swap(&a[min_index], &a[i]);
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];
        selectionSort();
        for(int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
}