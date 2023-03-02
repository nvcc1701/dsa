#include<bits/stdc++.h>
using namespace std;

// contest8/bai13timSoKThoaManDieuKien

vector<int> arr;

bool check(int x){
	map<int,int> myMap;
	while(x){
		if(x%10 > 5){
			return false;
		}
		else if(myMap.find(x%10) != myMap.end()){
			return false;
		}
		else{
			myMap[x%10] = 1;
		}
		x/=10;
	}
	return true;
}

void timTatCa(){
	int max = pow(10,5);
	int x;
	queue<int> myQ;
	myQ.push(1);
	myQ.push(2);
	myQ.push(3);
	myQ.push(4);
	myQ.push(5);
	while(!myQ.empty()){
		int t = myQ.front();
		myQ.pop();
		if(check(t)){
			arr.push_back(t);
		}
		if(t>max){
			continue;
		}
		for(int i=0;i<=5;i++){
			myQ.push(t*10 + i);
		}
	}
}

int timSoThoaMan(int l,int r){
	int count = 0;
	for(int i=0;i<arr.size();i++){
		if(arr[i]>r){
			break;
		}
		if(arr[i]>=l && arr[i]<=r){
			count++;
		}
	}
	return count;
}

int main(){
	int t;
	cin>>t;
	timTatCa();
	while(t--){
		int l,r;
		cin>>l>>r;
		cout<<timSoThoaMan(l,r)<<"\n";
	}
	return 0;
}

