// deoo hieu sai o dau ?

// #include <iostream>
// using namespace std;

// int a[10][10], b[10][10], n, kt; string answer;

// void input() {
//     for(int i = 1; i <= n; i++) for(int j = 1; j <= n; j++) {
//         cin >> a[i][j]; 
//         b[i][j] = 1;
//     }
// }

// bool check(int hang, int cot) {
// 	if (hang == 0 || hang == n+1 || cot == 0 || cot == n+1) return false;
// 	return true;
// }

// void print(int m) {
//     for(int i = 1; i < m; i++) cout << answer[i];
//     cout << " ";
// }

// void process(int i, int j, int m) {
//     if(i == n && j == n) {
//         print(m); kt = 1; return;
//     }
//     if(a[i+1][j] && b[i+1][j] && check(i+1, j)) {
//         answer[m] = 'D';
//         b[i][j] = 0;
//         process(i+1, j, m+1);
//         b[i][j] = 1;
//     }
//     if(a[i][j+1] && b[i][j+1] && check(i, j+1)) {
//         answer[m] = 'R';
//         b[i][j] = 0;
//         process(i, j+1, m+1);
//         b[i][j] = 1;
//     }
//     if(a[i][j-1] && b[i][j-1] && check(i, j-1)) {
//         answer[m] = 'L';
//         b[i][j] = 0;
//         process(i, j-1, m+1);
//         b[i][j] = 1;
//     }
//     if(a[i-1][j] && b[i-1][j] && check(i-1, j)) {
//         answer[m] = 'U';
//         b[i][j] = 0;
//         process(i-1, j, m+1);
//         b[i][j] = 1;
//     }
// }

// int main() {
//     int t; cin >> t;
//     while(t--) {
//         cin >> n; kt = 0;
//         input();
//         if(a[1][1] != 0 && a[n][n] != 0) process(1, 1, 1);
//         if(kt == 0) cout << -1;
//         cout << endl;
//     }
// }


#include<iostream>
 
 
using namespace std;
 
int n;
int A[11][11] = { 0 };
bool chuaxet[11][11];
char B[22];
int OK = 0;
 
bool kt(int hang, int cot) {
	if (hang == 0 || hang == n + 1 || cot == 0 || cot == n + 1 ) return false;
	return true;
}
 
void inkq(int step) {
	OK = 1;
	for (int i = 1; i < step; i++) {
		cout << B[i];
	}
	cout << " ";
}
 
void solve(int i, int j, int step) {
	if (i == n && j == n) {
		inkq(step);
		return;
	}
	//down
	if (kt(i + 1, j) && A[i + 1][j] && chuaxet[i + 1][j]) {
		B[step] = 'D';
		chuaxet[i][j] = false;
		solve(i + 1, j, step + 1);
		chuaxet[i][j] = true;
	}
	//left
	if (kt(i, j - 1) && A[i][j - 1] && chuaxet[i][j - 1]) {
		B[step] = 'L';
		chuaxet[i][j] = false;
		solve(i, j - 1, step + 1);
		chuaxet[i][j] = true;
	}
	//right
	if (kt(i, j + 1) && A[i][j + 1] && chuaxet[i][j + 1]) {
		B[step] = 'R';
		chuaxet[i][j] = false;
		solve(i, j + 1, step + 1);
		chuaxet[i][j] = true;
	}
	//up
	if (kt(i - 1, j) && A[i - 1][j] && chuaxet[i - 1][j]) {
		B[step] = 'U';
		chuaxet[i][j] = false;
		solve(i - 1, j, step + 1);
		chuaxet[i][j] = true;
	}
}
 
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				cin >> A[i][j];
				chuaxet[i][j] = true;
			}
		}
		OK = 0;
		if (A[1][1] == 0 || A[n][n] == 0) {
			cout << -1 << endl;
			continue;
		}
		solve(1, 1, 1);
		if (!OK) {
			cout << -1;
		}
		cout << endl;
	}
}