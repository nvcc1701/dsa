// chuan hoa 1 
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		int d = 0; // so ky tu bi xoa
		int i = 0;
		int prev = -1;
		while(s[i]!='\0'){
			if(s[i]==' ' && (prev < 0 || s[prev]==' ')){
				d++;// 2 ' ' lien tiep  hoac ' ' o dau chuoi.
			}
			else{
				s[i-d] = s[i];
				prev = i;
			}
			i++;
		}
		i-=d; // do dau xau moi
		if(s[i-1]==' '){ // xoa khoang trang cuoi cung 
			i--;
			s[i]='\0';
		}
		else s[i]='\0';
//		if(i && s[i-1]==' '){
//			s[i-1] = '\0';
//			d++;
//		}
//		else s[i] = '\0';
		for(int j=0;j<i;j++){
			if(j==0 || s[j-1]==' '){
				if(s[j]>='a' && s[j]<='z') s[j]-=32;
			}
			else{
				if(s[j]>='A' && s[j]<='Z') s[j]+=32;
			}
		}
		for(int k=0;k<i;k++){
			cout<<s[k];
		}
		cout<<"\n";
	}
	return 0;
}

