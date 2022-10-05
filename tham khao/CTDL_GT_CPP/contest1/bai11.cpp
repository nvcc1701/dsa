#include<iostream>
using namespace std;

// Gray to Binary
string gray;
string binary;

void init(){
	cin>>gray;
}

void gray_To_Binary(){
	binary = gray[0];
	for(int i=0;i<gray.length()-1;i++){
		if(binary[i] == gray[i+1]){
			binary += '0'; 
		}
		else{
			binary += '1';
		}
	}
}

void display(){
	cout<<binary<<"\n";
}

int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		init();
		gray_To_Binary();
		display();
	}
	return 0;
}


