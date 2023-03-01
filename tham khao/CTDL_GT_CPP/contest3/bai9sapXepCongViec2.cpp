#include<bits/stdc++.h>
using namespace std;  

// contest3/bai9sapXepCongViec2
struct job{
	int id;
	int deadline;
	int profit;
};

bool compare(job a,job b){
	return a.profit>b.profit;
}

void init(job arr[],int &n){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i].id>>arr[i].deadline>>arr[i].profit;
	}
}

int KQ(job arr[],int n){
	sort(arr,arr+n,compare);
	int profit = 0;
	int countJobs = 0;
	bool slot[n];
	for(int i=0;i<n;i++){
		slot[i] = false;
	}
	for(int i=0;i<n;i++){
		for(int j=arr[i].deadline-1;j>=0;j--){
			if(j<n && !slot[j]){
				countJobs++;
				slot[j] = true;
				profit += arr[i].profit;
				break;
			}
		}
	}
	cout<<countJobs<<" ";
	return profit;
}
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		job arr[1001];
		init(arr,n);
		cout<<KQ(arr,n)<<"\n";
	}
	return 0;
}

