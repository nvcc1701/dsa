#include<conio.h>
#include<stdio.h>
#include <iostream>
#include <fstream>
using namespace std;
//Tim duong di me cung

#define Toado pair <int,int>
#define H first
#define C second
#define FOR(i,a,b) for(int i=a;i<=b;i++)

class Mecung
{
	int n,m;
	int A[100][100];
	int d;
	public:
		void LoadFile(char *fn);
		void Write();
		void Print(Toado *x,int k);
		void TRY(Toado *x,int k, Toado f);
		void Path();
};

void Mecung::Path()
{
	Toado s,f;
	d=0;
	cout<<"\nNhap toa do xuat phat : ";
	cin>>s.H>>s.C;
	cout<<"\nNhap toa do ket thuc : ";
	cin>>f.H>>f.C;
	Toado *x=new Toado[n*m+5];
	x[1]=s;
	A[s.H][s.C]=1;
	TRY(x,1,f);
	if(d==0) cout<<"Khong co duong di";
	else cout<<"\nCo so duong di la "<<d;
}
	int hh[]={0, -1, 0, 1};
	int hc[]={1, 0, -1, 0};
void Mecung::TRY(Toado *x,int k, Toado f)
{
	if(x[k]==f) Print(x,k);
	else{
	FOR(t,0,3){
		x[k+1].H=x[k].H+hh[t];
		x[k+1].C=x[k].C+hc[t];
		if(A[x[k+1].H][x[k+1].C]==0){
			A[x[k+1].H][x[k+1].C]=1; //tien
			TRY(x,k+1,f);
			A[x[k+1].H][x[k+1].C]=0; //lui
			}
		}
	}
}

void Mecung::Print(Toado *x,int k)
{
	cout<<"\n";
	FOR(i,1,k) cout<<"("<<x[i].H<<","<<x[i].C<<")->";
	cout<<"\b\b ";
	d++;
}
void Mecung::Write()
{
	FOR(i,1,n)
	{
		FOR(j,1,m) cout<<A[i][j]<<" ";
		cout<<"\n";
	}
}
void Mecung::LoadFile(char *fn)
{
	ifstream f(fn);
	f>>n>>m;
	FOR(i,1,n)
	FOR(j,1,m)
	f>>A[i][j];
	f.close();
	FOR(i,1,n) A[i][0]=A[i][m+1]=1;
	FOR(j,1,m) A[0][j]=A[n+1][j]=1;
}

int main()
{
	Mecung M;
	M.LoadFile("mecung.txt");
	cout<<"ME CUNG \n";
	M.Write();
	M.Path();
	getch();
}
