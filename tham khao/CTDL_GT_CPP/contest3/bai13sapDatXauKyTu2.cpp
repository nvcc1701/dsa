#include<bits/stdc++.h>
using namespace std;

// contest3/bai13sapDatXauKyTu2

struct count_Char{
	int soLuong;
	char kyTu;
};

bool compare(count_Char a,count_Char b){
	return (a.soLuong>b.soLuong);
}

void solution(string s, int d){
	int n = s.length();
	int count[26];
	for(int i=0;i<26;i++){
		count[i] = 0;
	}
	for(int i=0;i<n;i++){
		count[s[i]-'A']++;
	}
	priority_queue< pair<int,char> > myPQ;
	for(char c='A';c<='Z';c++){
		if(count[c-'A']>0){
			pair<int,char> x;
			x.first = count[c-'A'];
			x.second = c;
			myPQ.push(x);
		}
	}
	s.clear();
	for(int i=0;i<n;i++){
		s[i]='0';
	}
	int i = 0;
	while(!myPQ.empty()){
		pair<int,char> k;
		k = myPQ.top();
		myPQ.pop();
		int t = 0;
//		while(k.first){
//			if(i+t*d>n){
//				cout<<-1<<"\n";
//				return;
//			}
//			else if(s[i+t*d]!='0'){
//				t++;
//			}
//			else{
//				s[i+t*d] = k.second;
//				k.first--;
//			}
//		}
		for(int t=0;t<k.first;t++){
			if((i+t*d)>n){
				cout<<"-1\n";
				return;
			}
			s[i+(t*d)] = k.second;
		}
		i++;
	}
	cout<<"1\n";
}

int main(){
	int t;
	cin>>t;
//	cin.ignore();
	while(t--){
		string s;
		int d;
		cin>>d>>s;
		solution(s,d);
	}
	return 0;
}

