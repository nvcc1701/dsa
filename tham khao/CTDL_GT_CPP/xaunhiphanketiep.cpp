 #include<iostream>
#include<string>
using namespace std;
int s,n,k,x[17];
void res(){
	for(int i=1; i<=n;i++)
	cout<<x[i]<<"";
	cout<<endl;
}
void qlNhiPhan(int i){
	for(int j=0; j<=1; j++){
		x[i]=j;
		s+=j;
		if(i==n && s==k)
			res();
		else if(i<n) qlNhiPhan(i+1);
		s-=j;
	}
}

int main() {
    int T;
    cin>>T;
    while(T--) {
        //string str;
        s=0;
    	cin>>n>>k;
        qlNhiPhan(1);
         }
         return 0;
}
