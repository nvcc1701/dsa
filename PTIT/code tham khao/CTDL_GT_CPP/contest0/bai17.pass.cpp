// ghep hinh vuong 
// file:///D:/ctdlgt/Contest1.pdf
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	cin>>a>>b;
	cin>>c>>d;
	cin>>e>>f;
	int dai1 = max(a,b);
	int dai2 = max(c,d);
	int dai3 = max(e,f);
	int rong1 = min(a,b);
	int rong2 = min(c,d);
	int rong3 = min(e,f);
	int s = a*b +c*d + e*f;
	int i=sqrt(s);
	if(dai1==dai2 && dai2==dai3 && rong1+rong2+rong3==dai1){
		cout<<"YES";
	}
	else if(i==s/i){
		int max23 = max(dai2,dai3);
		int maxDai = max(dai1,max23);
		if(maxDai == dai1){
			if((rong1+dai2==maxDai && (rong2+rong3 == maxDai || rong2+dai3 == maxDai)) 
			|| (rong1+dai3==maxDai && (rong3+rong2 == maxDai || rong3+dai2 == maxDai))
			|| (rong1+rong2==maxDai && (dai2+rong3 == maxDai || dai2+dai3 == maxDai))
			|| (rong1+rong3==maxDai && (dai3+rong2 == maxDai || dai3+dai2 == maxDai)) ){
				cout<<"YES";
			}
			else cout<<"NO";
		}
		else if(maxDai ==dai2){
			if((rong2+dai3==maxDai && (rong3+rong1 ==maxDai || rong3+dai1 ==maxDai)) 
			|| (rong2+dai1==maxDai && (rong1+rong3 ==maxDai || rong1+dai3 ==maxDai)) 
			|| (rong2+rong3==maxDai && (dai3+rong1 == maxDai || dai3+dai1 == maxDai))
			|| (rong2+rong1==maxDai && (dai1+rong3 == maxDai || dai1+dai3 == maxDai))){
				cout<<"YES";
			}
			else cout<<"NO";
		}
		else if(maxDai == dai3){
			if((rong3+dai1==maxDai && (rong1+rong2==maxDai || rong1+dai2==maxDai))
			|| (rong3+dai2==maxDai && (rong2+rong1==maxDai || rong2+dai1==maxDai)) 
			|| (rong3+rong1==maxDai && (dai1+rong2 == maxDai || dai1+dai2 == maxDai))
			|| (rong3+rong2==maxDai && (dai2+rong1 == maxDai || dai2+dai1 == maxDai))){
				cout<<"YES";
			} 
			else cout<<"NO";
		}
	}
	else cout<<"NO";
	return 0;
}

