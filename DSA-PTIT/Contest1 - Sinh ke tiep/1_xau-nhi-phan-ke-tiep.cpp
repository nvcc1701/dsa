#include <iostream>
using namespace std;

void solve() {
    string s; 
    cin >> s;

    int i = s.size()-1;
    while(s[i] =='1' && i >= 0) i--;
    if(i < 0) {
        for(int i = 0; i < s.size(); i++) cout << 0;
        cout << endl;
    } else {
        s[i] = '1';
        for(int j = i+1; j < s.size(); j++) s[j] = '0';
        cout << s << endl;
    }    
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
