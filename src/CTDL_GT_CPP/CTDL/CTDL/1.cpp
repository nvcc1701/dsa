#include<iostream> 
#include<math.h> 
using namespace std ; 
bool isPermutation(int x, int n){ 
	int t; int arr[n]; 
	for(int i=0; i< n; i++){ 
		t = x/pow(10, n-1-i); 
		x = x - t * pow(10, n-1-i); 
		arr[i] = t; 
	} 
	for(int i = 0; i< n; i++){ 
		for(int j =0; j< n; j++){ 
			if((arr[j] == arr[i] || arr[j] > n || arr[j] ==0) && i!=j){ 
				return false; 
			} 
		} 
	} return true; 
} 
int main() { 
	int t; 
	cin >> t; 
	int N[t]; 
	for(int i=0; i<t; i++){ 
		cin>>N[i]; 
	} 
	for(int i=0; i<t; i++){ 
		for(int j=pow(10,N[i])-1; j>pow(10, N[i]-1); j--){ 
			if(isPermutation(j, N[i])){ 
				cout << j << " "; 
			} 
		} 
		cout << "\n"; 
	} return 0; 
}
