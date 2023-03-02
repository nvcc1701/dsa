#include<iostream>
#include<cstring>
int kq[10000][10000];
using namespace std;
int main(){
	char a[10000],b[10000];
	int t;
	cin>>t;
	while(t--){
	cin>>a;
	cin>>b;
	int d1=strlen(a);
	int d2=strlen(b);
	for(int i=strlen(a);i>0;i--){
		a[i]=a[i-1];
	}
	a[d1+1]='\0';
	for(int i=strlen(b);i>0;i--){
		b[i]=b[i-1];
	}
	b[d2+1]='\0';
	for(int i=0;i<=strlen(b);i++){
		kq[0][i]=0;
	}
	for(int i=0;i<strlen(a);i++)
	kq[i][0]=0;
	for(int i=1;i<strlen(a);i++){
		bool thaydoi=false;
		for(int j=1;j<strlen(b);j++){
			if(thaydoi==true){
				if(a[i]==b[j]){
					kq[i][j]=kq[i-1][j-1]+1;
					thaydoi=true;
				}
			else{
				kq[i][j]=kq[i][j-1];
				
			}
		}
		else{
			if(a[i]==b[j]){
				kq[i][j]=kq[i-1][j-1]+1;
				thaydoi=true;
			}
			else{	
				kq[i][j]=kq[i-1][j];
			}	
		}	
	}
}
	cout<<kq[strlen(a)-1][strlen(b)-1]<<endl;
	}

//for(int i=0;i<strlen(a);i++){
//	for(int j=0;j<strlen(b);j++){
//	cout<<kq[i][j]<<" ";
//}
//}

}
