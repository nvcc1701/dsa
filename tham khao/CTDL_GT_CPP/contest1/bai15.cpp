#include<iostream>
using namespace std;
//  haon vi tiep theo cua chuoi so

string s;
int test;
int n;

void init(){
	cin>>test;
	cin.ignore();
	cin>>s;
	n = s.length();
}

bool isFinal(){
	for(int i=0;i<n-1;i++){
		if(s[i]<s[i+1]){
			return false;
		}
	}
	return true;
}

void display(){
	cout<<test<<" "<<s<<"\n";
}

void genNext(){
	int i = n-2;;
	while(s[i]>=s[i+1]) i--;
	int k = n-1;
	while(s[i]>=s[k]) k--;
	swap(s[i],s[k]);
	int f = i+1,l=n-1;
	while(f<l){
		swap(s[f],s[l]);
		f++;l--;
	}
}

int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		init();
		if(!isFinal()){
			genNext();
			display();
		}
		else{
			cout<<test<<" BIGGEST\n";
		}
	}
	return 0;
}

