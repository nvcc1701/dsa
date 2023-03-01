#include <iostream>
#include <stack>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, a[100005]; cin >> n;

        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        for(int i = 1; i <= n; i++) {
            if(i == n) {
                cout << -1 << endl;
            }
            for(int j = i+1; j <= n; j++) {
                while(j != n) {
                    if(a[i] < a[j]) {
                        cout << a[j] << " ";
                        break;
                    }
                    j++;
                }
                
            }
        }
    }
}