#include<bits/stdc++.h>
using namespace std;

// contest6/bai4sorting4

void findUnion(int n,int m,int a[],int b[]){
	int i=0,j=0;
	while(i<n && j<m){
		if(a[i] < b[j]){
			cout<<a[i]<<" ";
			i++;
		}
		else if(a[i] > b[j]){
			cout<<b[j]<<" ";
			j++;
		}
		else{
			cout<<a[i]<<" ";
			i++;
			j++;
		}
	}
	while(i<n){
		cout<<a[i]<<" ";
		i++;
	}
	while(j<m){
		cout<<b[j]<<" ";
		j++;
	}
	cout<<"\n";
}

void findIntersection(int n,int m,int a[],int b[]){
	int i=0,j=0;
	while(i<n && j<m){
		if(a[i]<b[j]){
			i++;
		}
		else if(a[i] > b[j]){
			j++;
		}
		else{
			cout<<a[i]<<" ";
			i++;j++;
		}
	}
	cout<<"\n";
}

void findUnionAndIntersection(int n,int m,int a[],int b[]){
	int arr_Union[10000],arr_Intersection[10000];
	int ku = 0,ki =0;
	int i=0,j=0;
	while(i<n && j<m){
		if(a[i] < b[j]){
			arr_Union[ku++] = a[i++];
		}
		else if(a[i]>b[j]){
			arr_Union[ku++] = b[j++];
		}
		else{
			arr_Intersection[ki++] = a[i];
			arr_Union[ku++] = a[i];
			i++;
			j++;
		}
	}
	while(i<n){
		arr_Union[ku++] = a[i++];
	}
	while(j<m){
		arr_Union[ku++] = b[j++];
	}
	for(int i=0;i<ku;i++){
		cout<<arr_Union[i]<<" ";
	}
	cout<<"\n";
	for(int i=0;i<ki;i++){
		cout<<arr_Intersection[i]<<" ";
	}
	cout<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n];
		int b[m];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
//		findUnionAndIntersection(n,m,a,b);
		findUnion(n,m,a,b);
		findIntersection(n,m,a,b);
		
	}
	return 0;
}

