#include<bits/stdc++.h>
using namespace std;

// contest4/bai29capDiemGanNhat

double res = 9999999999;
int n;

struct point {
	double x;
	double y;
};

bool compare_x(point &a, point &b){
	return a.x<b.x;
}

bool compare_y(point &a, point &b){
	return a.y<b.y;
}

void update_Distance(const point a,const point b){
	double dist = sqrt((a.x - b.x)*(a.x - b.x)+(a.y - b.y)*(a.y - b.y));
	res = min(res,dist);
}

point arr[1000];

void KQ(int l,int r){
	if(l>=r){
		return;
	}
	if(r==l+1){		// doan l,r co 2 phan tu
		update_Distance(arr[l],arr[r]);
		if(!compare_y(arr[l],arr[r])){	// sap xep giam dan theo y 
			swap(arr[l],arr[r]);
		}
		return;
	}
	int m = (l+r)/2;
	double minx = arr[m].x;
	KQ(l,m);
	KQ(m+1,r);
	
	point temp[n];
	merge(arr+l,arr+m+1,arr+m+1,arr+r+1,temp,compare_y); 	// tron mang a[l,m] va a[m+1,r] lai luu vao mang temp;
	copy(temp,temp+r-l+1,arr+l);							// copy tu t[0] den t[r-l] vao a;
	
	// mang temp se luu cac phan tu thoa man |xi - minx| < res
	// voi so luong phan tu la tm;
	// cac phan tu se co y tang dan
	int tm = 0;
	for(int i=l;i<=r;i++){
		if(abs(arr[i].x - minx) < res){
			for(int j=tm-1;j>=0 && temp[j].y > arr[i].y - res;j--){
				res = min(res,distance(arr[i],arr[j]));
			}
			temp[tm++] = arr[i];
		}
	}
}	

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i].x>>arr[i].y;
		}
		KQ(0,n-1);
		cout<<fixed<<setprecision(6)<<res<<"\n";
	}
	return 0;
}

