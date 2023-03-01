#include<bits/stdc++.h>
using namespace std;

// contest8/bai11bienDoiSoNguyenTo

bool soNT[10000];
bool chuaXet[10000];
int duongDi[10000];
int arr[4];

void sangSnt(){
	memset(soNT,true,sizeof(soNT));
	for(int i=2;i<=100;i++){
		if(soNT[i]){
			for(int j=i*2;j<=9999;j+=i){
				soNT[j] = false;
			}
		}
	}
}

void toArray(int x,int arr[]){
	for(int i=3;i>=0;i--){
		arr[i] = x%10;
		x/=10;
	}
}

int toNumber(int arr[]){
	int x = 0;
	for(int i=0;i<=3;i++){
		x = x*10 + arr[i];
	}
	return x;
}

int bienDoiSoNguyenTo(int s,int t){
	memset(chuaXet,true,sizeof(chuaXet));
	memset(duongDi,0,sizeof(duongDi));
	queue<int> myQ;
	myQ.push(s);
	chuaXet[s] = false;
	while(!myQ.empty()){
		int x = myQ.front();
		myQ.pop();
		for(int i=0;i<=3;i++){
			toArray(x,arr);
			for(int j=0;j<=9;j++){
				arr[i] = j;
				int temp = toNumber(arr);
				if(soNT[temp] && temp>1000 && chuaXet[temp]){
					chuaXet[temp] = false;
					myQ.push(temp);
					duongDi[temp] = duongDi[x] + 1;
				}
			}
		}
	}
	return duongDi[t];
}

int main(){
	int n;
	cin>>n;
	sangSnt();
	while(n--){
		int s,t;
		cin>>s>>t;
		cout<<bienDoiSoNguyenTo(s,t)<<"\n";
	}
	return 0;
}

