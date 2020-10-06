#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int k; string s;
        cin >> k >> s;

        for(int i = 0; i < s.size(); i++) {
            char Max = s[s.size()-1];
            int vt = s.size()-1;
            for(int j = s.size()-1; j > i; j--) {
                if(Max < s[j]) {
                    Max = s[j];
                    vt = j;
                }
            }
            if(Max > s[i] && k > 0) {
                swap(s[vt], s[i]);
                k--;
            }
        }

        cout << s << "\n";
    }
}