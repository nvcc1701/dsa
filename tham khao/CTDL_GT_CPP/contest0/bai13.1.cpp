#include<iostream>
#include<map>
using namespace std;
bool kiemTra(long long a){
	while(a){
		if((a%10)==2 || (a%10)==3 || (a%10)==5 || (a%10)==7){
			a/=10;
			if(a==0) return true;
		}
		else return false;
	}
	return false;
}
void in(long long n){
	int dem=0;
	for(int i=0;i<n;i++){
		if(kiemTra(i)){
//			cout<<i<<" ";
		dem++;
		}
	}
	cout<<dem<<"\n";
}
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{	
//		int n;
		long long n;
		cin>>n;
//		long long a[n];
//		for(int i=0;i<n;i++){
//			cin>>a[i];
//		}
//		map<long long,int> myMap;
//		for(int i=0;i<n;i++){
//			myMap[a[i]]++;
//		}
//		map<long long,int>::iterator it;
//		for(it=myMap.begin();it!=myMap.end();it++){
//			if(kiemTra(it->first)){
//				cout<<it->first<<" "<<it->second<<"\n";
//			}
//		}
		in(n);
	}	
	return 0;
}

