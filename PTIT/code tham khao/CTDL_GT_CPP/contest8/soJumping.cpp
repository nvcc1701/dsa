#include<bits/stdc++.h>
using namespace std;

int x;
int arr[11];
vector<long long> res;

void toArray(long long x,int i){
	for(int j=i-1;j>=0;j--){
		arr[j] = x%10;
		x/=10;
	}
}

int soChuSo(long long x){
	int soChuSo = 0;
	while(x){
		x/=10;
		soChuSo++;
	}
	return soChuSo;
}

void soJumping(){
	res.push_back(0);res.push_back(1);res.push_back(2);res.push_back(3);res.push_back(4);
	res.push_back(5);res.push_back(6);res.push_back(7);res.push_back(8);res.push_back(9);
	queue<long long> myQ;
	myQ.push(1);
	myQ.push(2);
	myQ.push(3);
	myQ.push(4);
	myQ.push(5);
	myQ.push(6);
	myQ.push(7);
	myQ.push(8);
	myQ.push(9);
	int i;
	while(!myQ.empty()){
		int u = myQ.front();
		myQ.pop();
		i = soChuSo(u);
		toArray(u,i);
		long long temp1 = u*10 + arr[i-1] - 1;
		long long temp2 = u*10 + arr[i-1] + 1;
		if(temp1 > pow(10,9) || temp2 > pow(10,9)){
			break;
		}
		else if(arr[i-1] == 9){
			res.push_back(temp1);
			myQ.push(temp1);
		}
		else if(arr[i-1] == 0){
			res.push_back(temp2);
			myQ.push(temp2);
		}
		else{
			res.push_back(temp1);
			myQ.push(temp1);
			res.push_back(temp2);
			myQ.push(temp2);
		}
	}
}

int main(){
	int t;
	cin>>t;
	soJumping();
	while(t--){
		cin>>x;
		for(int i=0;i<res.size();i++){
			if(res[i] > x){
				break;
			}
			else{
				cout<<res[i]<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}

