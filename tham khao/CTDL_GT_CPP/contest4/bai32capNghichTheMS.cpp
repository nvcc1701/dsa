#include<bits/stdc++.h>
using namespace std;

// contest4/bai32capNghichThe

long long merge(long long arr[],long long temp[],int l,int m,int r){
	int i = l;		// thiet lap vi tri cua L[]
	int j = m;		// thiet lap vi tri cua R[]
	int k = l;		// xuat phat tu k=l
	long long res = 0;		// gan res = 0
	while(i <= m-1 && j<= r){		// lap
		if(arr[i]<=arr[j]){			// neu arr[i]<=arr[j]
			temp[k] = arr[i++];
		}
		else{
			temp[k] = arr[j++];		// i<j va arr[i]>arr[j]
//			cout<<" l = "<<l<<" m = "<<m<<" r = "<<r<<" arr["<<i<<"]= "<<arr[i]<<" arr["<<j<<"]= "<<arr[j]<<"\n";;
			res += m-i;
		}
		k++;
	}
	// lay not cac phan tu con lai 
	while(i <= m-1){
		temp[k++] = arr[i++];
	}
	while(j <= r){
		temp[k++] = arr[j++];
	}
	// tra lai mang arr[] duoc sap xep.
	for(int i=l;i<=r;i++){
		arr[i] = temp[i];
	}
//	cout<<"res = "<<res<<"\n";
	return res;
}	

// sap xep mergeSort(sx hoa nhap)
long long mergeSort(long long arr[],long long temp[],int l,int r){
	long long res = 0;
	if(l<r){
		int m = (r+l)/2;				// lay phan tu o giua
		res = mergeSort(arr,temp,l,m);			// tri nua thu nhat
//		cout<<" res1 = "<<res<<"\n";
		res += mergeSort(arr,temp,m+1,r);		// tri nua thu hai
//		cout<<" res2 = "<<res<<"\n";
		res += merge(arr,temp,l,m+1,r);			// hoa nhap hai nua
//		cout<<" res3= "<<res<<"\n";
	}
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		long long temp[n];
		long long res = mergeSort(arr,temp,0,n-1);
		cout<<res<<"\n";
	}
	return 0;
}

