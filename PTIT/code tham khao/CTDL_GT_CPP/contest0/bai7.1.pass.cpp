// tich ma tran voi ma tran chuyen vi cua no
// file:///D:/ctdlgt/Contest1.pdf
#include<iostream>
using namespace std;
int n,m;
int a[100][100];
int b[100][100];
int r[100][100];

void init(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
}
void chuyenVi(){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			b[j][i]=a[i][j];
		}
	}
}
void result(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			r[i][j]=0;
			for(int k=0;k<m;k++){
				r[i][j] += a[i][k]*b[k][j];
			}
		}
	}
}
void display(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<r[i][j]<<" ";
		}
		cout<<"\n";
	}
}
int main()
{
	int t,test=1;
	cin>>t;
	while(t--)
	{
		init();
		chuyenVi();
		result();
		cout<<"Test "<<test<<":\n";
		display();
		test++;
	}
	return 0;
}

