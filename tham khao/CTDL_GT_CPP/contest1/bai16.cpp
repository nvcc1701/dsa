#include<iostream>
using namespace std;
// chon so tu ma tran vuong cap n

int n,k;
int x[11];
bool c[11];
int matrix[11][11];
int res;
string s;
void init(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		c[i]=true;
		for(int j=1;j<=n;j++){
			cin>>matrix[i][j];
		}
	}
	res = 0 ;
	s = "";
}

void display(){
//	for(int i=0;i<s.length();i++){
//		cout<<s[i];
//	}
	cout<<s;
}

void Try(int i){
	for(int j=1;j<=n;j++){
		if(c[j]){
			x[i] = j;
			c[j]= false ;
			if(i==n){
				int sum = 0;
				for(int l=1;l<=n;l++){
					sum+=matrix[l][x[l]];
				}
				if(sum==k){
					res++;
					for(int l=1;l<=n;l++){
						s += x[l] +'0';
						s += " ";
					}
					s += "\n";
				}
			} 
			else Try(i+1);
			c[j] = true;
		}
	}
}

int main()
{
	init();
	Try(1);
	cout<<res<<"\n";
	display();
	return 0;
}

