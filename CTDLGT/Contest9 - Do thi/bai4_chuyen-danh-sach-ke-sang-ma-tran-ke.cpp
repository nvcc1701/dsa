#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n; cin >> n;
    cin.ignore();
    string s; 
    vector<int> ke[1005];

    for(int i = 1; i <= n; i++) {
        getline(cin, s); s += " ";

        int so = 0; int j = 0;
        while(j < s.size()) {
            if(s[j] >= '0' && s[j] <= '9')
                so = so*10 + (int)(s[j] - '0');
            else if(so > 0) {
                ke[i].push_back(so);
                so = 0;
            }
            j++;
        }

        int a[1005] = {0};
        for(int j = 0; j < ke[i].size(); j++) 
            a[ke[i][j]] = 1;
        for(int j = 1; j <= n; j++) {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}