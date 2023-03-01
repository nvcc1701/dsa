#include<bits/stdc++.h>
using namespace std;

// contest8/bai3hangDoi2Dau

int main(){
	int n;
	cin>>n;
	string s;
	int x;
	int queue[1000];
	int front = 0,rear = 0;
	for(int i=0;i<n;i++){
		cin>>s;
		if(s == "PUSHFRONT"){
			cin>>x;
			for(int i=rear;i>=1;i--){
				queue[i] = queue[i-1];
			}
			rear++;
			queue[front] = x;
		}
		else if(s == "PRINTFRONT"){
			if(front == rear){
				cout<<"NONE\n";
			}
			else{
				cout<<queue[front]<<"\n";
			}
		}
		else if(s == "POPFRONT"){
			if(front == rear){
				continue;
			}
			else{
				for(int i=0;i<rear-1;i++){
					queue[i] = queue[i+1];
				}
				rear--;
			}
		}
		else if(s == "PUSHBACK"){
			cin>>x;
			queue[rear++] = x;
		}
		else if(s == "PRINTBACK"){
			if(front == rear){
				cout<<"NONE\n";
			}
			else{
				cout<<queue[rear-1]<<"\n";
			}
		}
		else if(s == "POPBACK"){
			if(front == rear){
				continue;
			}
			else{
				rear--;
			}
		}
	}
	return 0;
}

