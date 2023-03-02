/* package whatever; // don't place package name! */

#include<iostream>
#define chia 1000000007
using namespace std;
long long kq[2000][2000];
int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
//		for(int i=1;i<=n;i++){
//			kq[1][i]=i;
//		}
		for(int i=0;i<=k;i++){
			for(int j=0;j<=k;j++){
				kq[i][j] = 0;
			}
		}
		for(int i=0;i<=k;i++){
			for(int j=0;j<=n;j++){
				if(i==0 || i==j){
					kq[i][j]=1;
				}
				else{
					kq[i][j]=(kq[i][j-1]+kq[i-1][j-1])%chia;
				}
			}
		}
//		for(int i=1;i<=k;i++){
//			for(int j=1;j<=n;j++){
//				cout<<kq[i][j]<<" ";
//			}
//			cout<<endl;
//		}
		cout<<kq[k][n]<<endl;	
		
		
		
		
	}
}
