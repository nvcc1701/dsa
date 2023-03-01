#include<bits/stdc++.h>
#include<queue>
using namespace std;

// contest3/bai16soNhoNhat
int main(){
	int t;
	cin>>t;
	while(t--){
		int s,d;
		cin>>s>>d;
		if(s>9*d){
			cout<<-1;
		}
		else {
			if(s==1 && d>1){
				cout<<-1;
			}
			else if(s==1 && d==1){
				cout<<1;
			}
			else{
				int a[d];
				for(int i=1;i<d;i++){
					a[i] = 0;
				}
				a[0] = 1;
				s--;
				int index = d-1;
				while(s){
					if(s>=9){
						a[index]+=9;
						index--;
						s-=9;
					}
					else{
						a[index] += s;
						s=0;
					}
				}
				for(int i=0;i<d;i++){
					cout<<a[i];
				}
			}
		}
		cout<<"\n";
	}
	return 0;
}

