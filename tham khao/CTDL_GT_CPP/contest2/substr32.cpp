#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string substr1 = s.substr(0,5); // lay tu vi trí 0 và lây 5 ky tu
		cout<<" substr1 = "<<substr1<<"\n";
		string substr2 = s.substr(0); // lay tu vi tri 0 den het xau
		cout<<" substr2 = "<<substr2<<"\n";
		string substr3 = s.substr(0,1);// lay tu vi trí 0 và lây 1 ky tu
		cout<<" substr3 = "<<substr3<<"\n";
		string substr4 = s.substr(2);// lay tu vi tri 2 den het xau
		cout<<" substr4 = "<<substr4<<"\n";
		string substr5 = s.substr(0,1)+s.substr(1+1); // lay tu vi tri 0 lay 1 ky tu, sau do cong voi xau lay tu vi tri 2;
		cout<<" substr5 = "<<substr5<<"\n";
	}
	return 0;
}

