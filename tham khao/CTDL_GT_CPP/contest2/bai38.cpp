#include<bits/stdc++.h>
using namespace std;

// so nho nhat co n uoc;

typedef unsigned long long ull;
typedef unsigned int uint;

uint snt[] = {0, 2, 3, 5, 7, 11, 13, 17, 19, 23 };
uint c[10],nghiem[10];
uint n; 
ull res;
ull temp;

void init(){
	cin>>n;
	res = 1000000000000001000ULL;
	memset(nghiem,0,sizeof(nghiem));
}

 
void Try(int k,int i,int n) {
    if(i==n){
    	temp = 1;
    	for(int j=1;j<k;j++){
    		temp *=pow(snt[j],nghiem[j]-1);
    		if(temp<1) break;
		}
		if(temp>0) res = min(res,temp);
	}
	else{
		for(int j=2;j<=n;j++){
			if(i*j<=n){
				i*=j;
				nghiem[k] = j;
				if (pow(snt[k],j-1)>0) Try(k+1,i,n);
				i/=j;
			}
			else{
				break;
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		Try(1,1,n);
		cout<<res<<"\n";
	}
	return 0;
}

