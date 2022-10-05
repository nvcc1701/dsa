/* so dau tien bi lap
*/
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long a[n];
//		int count[50000];
		for(int i=0;i<n;i++){
			cin>>a[i];
//			count[a[i]]=0;
		}
		bool check=true;
//		for(int i=0;i<n;i++){
//			count[a[i]]++;
//			if(count[a[i]]==2){
//				cout<<a[i]<<"\n";
//				check = false;
//				break;
//			}
//		}
		for(int i=0;i<n-1;i++){
			int dem=1;
			for(int j=n-1;j>i;j--){
				if(a[j]==a[i]){
					cout<<a[i]<<"\n";
					check=false;
					break;
				}
			}
			if(!check){
				break;
			}
		}
		if(check){
			cout<<"NO\n";
		}
	}
	return 0;
}

