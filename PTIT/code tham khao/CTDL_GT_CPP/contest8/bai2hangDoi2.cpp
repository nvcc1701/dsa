#include<bits/stdc++.h>
using namespace std;

// contest8/bai2hangDoi2

int main(){
//	int t;
//	cin>>t;
//	while(t--){
		int n;
		cin>>n;
		int queue[1000];
		int front = 0, rear = 0;
		string s;
		int x;
		for(int i=0;i<n;i++){
			cin>>s;
			if(s == "PUSH"){
				cin>>x;
				queue[rear++] = x;
			}
			else if(s == "POP"){
				if(rear == front){
					continue;
				}
				else{
					for(int i=0;i<rear-1;i++){
						queue[i] = queue[i+1];
					}
					rear--;
				}
			}
			else if(s == "PRINTFRONT"){
				if(rear == front){
					cout<<"NONE\n";
				}
				else{
					cout<<queue[front]<<"\n";
				}
			}
		}
//	}
	return 0;
}

