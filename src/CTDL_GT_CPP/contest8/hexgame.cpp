#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
string a = "0000000000";
string b = "1238004765";
 
gp_hash_table<string,int> dp;
 
string turnLeft(string a) {
	char tmp = a[0];
	a[0] = a[3], a[3] = a[7], a[7] = a[8];
	a[8] = a[5], a[5] = a[1], a[1] = tmp;
	return a;
}
 
string turnRight(string a) {
	char tmp = a[1];
	a[1] = a[4], a[4] = a[8], a[8] = a[9];
	a[9] = a[6], a[6] = a[2], a[2] = tmp;
	return a;
}
 
void minStep() {
	dp[a] = 0;
	queue<string> q;
	q.push(a);
	while (!q.empty()) {
		string t = q.front();
		q.pop();
 
		if (t == b) break;
		string l = turnLeft(t);
		string r = turnRight(t);
 
		if (dp.find(l) == dp.end()) {
			q.push(l);
			dp[l] = dp[t] + 1;
		}
		if (dp.find(r) == dp.end()) {
			q.push(r);
			dp[r] = dp[t] + 1;
		}
	}
 
	cout << dp[b] << endl;
}
 
int main() {
	for (int i = 0; i < 10; i++) cin >> a[i];
	minStep();
	return 0;
}
