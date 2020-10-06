#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a, d[10] = {0};
        for(int i = 0; i < n; i++){
            cin >> a;
            while(a) {
                d[a%10] = 1;
                a /= 10;
            }
        }

        for(int i = 0; i < 10; i++) 
            if(d[i] == 1) cout << i << " ";
        cout << endl; 
    }
}