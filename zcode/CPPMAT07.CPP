#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[100][100];
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++) cin >> a[i][j];

        for(int i = 1; i <= n; i++) {
            if(i%2 != 0) {
                for(int j = 1; j <= n; j++) cout << a[i][j] << " ";
            } else {
                for(int j = n; j >= 1; j--) cout << a[i][j] << " ";
            }
        }
        cout << "\n";
    }
}