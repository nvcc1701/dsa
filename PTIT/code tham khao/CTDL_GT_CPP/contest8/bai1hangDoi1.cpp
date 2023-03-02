#include<bits/stdc++.h>
using namespace std;

// contest8/bai1hangDoi1
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		queue<int> myQ;
		int x;
		int num;
		for(int i=0;i<n;i++){
			cin>>num;
			switch(num){
				case 1:
					cout<<myQ.size()<<"\n";
					break;
				case 2:
					if(!myQ.empty()){
						cout<<"NO\n";
					}
					else{
						cout<<"YES\n";
					}
					break;
				case 3:
					cin>>x;
					myQ.push(x);
					break;
				case 4:
					if(!myQ.empty()){
						myQ.pop();
					}
					break;
				case 5:
					if(!myQ.empty()){
						cout<<myQ.front()<<"\n";
					}
					else{
						cout<<-1<<"\n";
					}
					break;
				case 6:
					if(!myQ.empty()){
						cout<<myQ.back()<<"\n";
					}
					else{
						cout<<-1<<"\n";
					}
					break;
			}
		}
	}
	return 0;
}

