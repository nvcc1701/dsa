#include<iostream>
using namespace std;

void trim(string s){
	int i = 0;
	int d = 0; //
	int prev = -1;
	while(s[i]!='\0'){
		if(s[i]==' ' && (prev < 0 || s[prev]==' ')){ // tim 2 khoang trang lien tiep hoac khoang trang dau tien
			d++;
		}
		else{
			s[i-d] = s[i];
			prev = i;
		}
		i++;
	}
	i -= d; // do dai xau moi;
	if(s[i-1]==' '){ // tim khoang trang cuoi (neu co)
		i--;
		s[i]='\0';
	}
	else s[i]='\0';
//	for(int j=0;j<i;j++){
//		if(j==0 || s[j-1]==' '){
//			if(s[j]>='a' && s[j]<='z') s[j]-=32;
//		}
//		else if(s[j]>='A' && s[j]<='Z') s[j]+=32;
//	}
	int fn = 0; // tim vi tri first name;
	while(s[fn]!=' '){
		if(s[fn]>='a' && s[fn]<='z') s[fn]-=32;
		fn++;
	}
	for(int j=fn+1;j<i;j++){
		if(s[j-1]==' '){
			if(s[j]>='a' && s[j]<='z') s[j]-=32;
		}
		else if(s[j]>='A' && s[j]<='Z') s[j]+=32;
		cout<<s[j];
	}
	cout<<", ";
	for(int j=0;j<fn;j++){
		cout<<s[j];
	}
//	cout<<fn;
}
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		trim(s);
		cout<<"\n";
	}
	return 0;
}

