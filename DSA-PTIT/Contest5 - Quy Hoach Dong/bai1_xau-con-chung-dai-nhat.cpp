#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int f[1005][1005];

int main() {
    int t; cin >> t;
    while(t--) {   
        string s1, s2;
        cin >> s1 >> s2;
        int res = 0;
        memset(f, 0, sizeof(f));

        for(int i = 1; i <= s1.size(); i++) {
            for(int j = 1; j <= s2.size(); j++) {
                if(s1[i-1] == s2[j-1]) f[i][j] = f[i-1][j-1] + 1;
                else f[i][j] = max(f[i-1][j], f[i][j-1]);
                res = max(res, f[i][j]);
            }
        }
        cout << res << endl;
    }
}