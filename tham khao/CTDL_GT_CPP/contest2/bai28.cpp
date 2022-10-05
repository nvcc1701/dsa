#include<bits/stdc++.h>
using namespace std;

//
void display();
vector<int> arr;
vector<int> r;
vector<vector<int> > res;
int n,sum;
bool check;

void init(){
	arr.clear();
	res.clear();
	r.clear();
	cin>>n>>sum;
	int e;
	check = false;
	for(int i=0;i<n;i++){
		cin>>e;
		arr.push_back(e);
	}
	// sap xep tang dan.
	sort(arr.begin(),arr.end());
	// xoa cac phan tu trung.
	arr.erase(unique(arr.begin(),arr.end()),arr.end());
}

void display(){
	for(int i=0;i<res.size();i++){
		cout<<"[";
		for(int j=0;j<res[i].size()-1;j++){
			cout<<res[i][j]<<" ";
		}
		cout<<res[i][res[i].size()-1]<<"] ";
	}
	cout<<"\n";
}

void Try(int i,int sum){
	cout<<" i = "<<i<<" sum = "<<sum<<"\n";
	if(sum==0){
		check = true;
		res.push_back(r);
		return;
	}
	while(i<arr.size()){
		if(sum - arr[i] >=0){
			cout<<" *i = "<<i<<" *sum = "<<sum<<"\n";
			r.push_back(arr[i]);
			cout<<"Try\n";
			Try(i,sum-arr[i]);
			cout<<"Sau try\n";
			i++;
			cout<<" **i = "<<i<<" **sum = "<<sum<<"\n";
			r.pop_back();
		}
		else{
			cout<<"---i = "<<i<<" --sum = "<<sum<<"\n";
			break;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		Try(0,sum);
		if(!check){
			cout<<"-1\n";
		}
		else{
			display();
		}
	}
	return 0;
}

