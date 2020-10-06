#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int F[1005][1005];

int main() {
    int t; cin >> t;
    while(t--) {
        string s1, s2; int res = 0; 
        cin >> s1 >> s2;
        memset(F, 0, sizeof(F));

        for(int i = 1; i <= s1.size(); i++) {
            for(int j = 1; j <= s2.size(); j++) {
                if(s1[i-1] == s2[j-1]) F[i][j] = F[i-1][j-1] + 1;
                else F[i][j] = max(F[i-1][j], F[i][j-1]);
                res = max(res, F[i][j]);
            }
        }      
        cout << res << "\n"; 
    }
}