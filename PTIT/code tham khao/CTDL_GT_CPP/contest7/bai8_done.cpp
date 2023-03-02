#include<bits/stdc++.h>
using namespace std;
//-(-(a+b)-(c+d+e)-(a-b))
char dau(char s, int t){
	if(t == 1) return s;
	else if(s == '+' && t == -1) return '-';
	return '+';
}

main(){
	int t;
	string str;
	cin>>t;
	while(t--){
		cin>>str;
		int n=str.length();
		bool in=false;
		stack<int> s;
		s.push(1);
		for(int i=0; i<n; i++){
			if(str[i] == '(' && str[i+1] >= 97 && str[i+1] <= 122 && i != 0){
				if(in || s.top() == -1)// neu khong cos s.top() == -1 ma sub van xanh voi test -(a+b)
					if(s.top() == 1)	cout<<'+';
					else	cout<<'-';
			}
			else if((str[i] == '+' || str[i] == '-') && str[i+1] == '('){
				if(dau(str[i],s.top()) == '+') s.push(1);
				else s.push(-1);
			}
			else if(str[i] == '+' || str[i] == '-' )	cout<<dau(str[i], s.top());
			else if(str[i] == ')') s.pop();
			else  if(str[i] >= 97 && str[i] <= 122){ cout<<str[i];	in=true;	}
		}
		cout<<endl;
	}
}
