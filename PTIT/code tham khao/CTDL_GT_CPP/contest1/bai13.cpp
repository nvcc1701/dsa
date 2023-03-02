#include<iostream>
using namespace std;

// xau AB dac biet
int n,k,demA,demKA;
char c[16];
string s;
int res;

void init(){
	cin>>n>>k;
}

void display(){
	cout<<s;
}

void Try(int i){
	for(int j=0;j<=1;j++){
		c[i] = j+65;
		if(i==n){
			demA=0;
			demKA=0;
			for(int l=1;l<=n;l++){
				if(c[l]=='A'){
					demA++;
					{
						if(demA>=k){
							demKA++;
						}
					}
				}
				else demA=0;		
			}
			if(demKA==1){
				res++;
				for(int l=1;l<=n;l++){
					s += c[l];
				}
				s+="\n";
			}
			
		}
		else Try(i+1);
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

