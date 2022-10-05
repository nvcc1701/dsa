#include<bits/stdc++.h>
using namespace std;

// contest8/bai19diChuyenTrongKhongGian

int dx[] = {1,0,-1, 0,0, 0};
int dy[] = {0,1, 0,-1,0, 0};
int dz[] = {0,0, 0, 0,1,-1};
int a, b, c;
bool chuaXet[31][31][31];
char space[31][31][31];

struct Point{
	int x,y,z;
};

bool diDuoc(int x,int y,int z){
	return (x>=0 && y>=0 && z>=0 && x<a && y<b && z<c);
}

int diChuyenTrongKhongGian(int xs,int ys,int zs, int xe,int ye,int ze){
	memset(chuaXet,true,sizeof(chuaXet));
	Point A = {xs,ys,zs};
	queue<Point> myQ;
	myQ.push(A);
	chuaXet[xs][ys][zs] = false;
	int steps = 0;
	while(!myQ.empty()){
		int size = myQ.size();
		while(size--){
			Point B = myQ.front();
			myQ.pop();
			if(B.x == xe && B.y == ye && B.z == ze){
				return steps;
			}
			for(int i=0;i<6;i++){
				if(diDuoc(B.x + dx[i],B.y + dy[i],B.z + dz[i]) && chuaXet[B.x + dx[i]][B.y + dy[i]][B.z + dz[i]] 
					&& (space[B.x + dx[i]][B.y + dy[i]][B.z + dz[i]] == '.' || space[B.x + dx[i]][B.y + dy[i]][B.z + dz[i]] == 'E')){
					chuaXet[B.x + dx[i]][B.y + dy[i]][B.z + dz[i]] = false;
					A.x = B.x + dx[i];
					A.y = B.y + dy[i];
					A.z = B.z + dz[i];
					myQ.push(A);
				}
			}
		}
		steps++;
	}
	return -1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				for(int k=0;k<c;k++){
					cin>>space[i][j][k];
				}
			}
		}
		int xs,ys,zs,xe,ye,ze;
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				for(int k=0;k<c;k++){
					if(space[i][j][k] == 'S'){
						xs = i;
						ys = j;
						zs = k;
						break;
					}
				}
			}
		}
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				for(int k=0;k<c;k++){
					if(space[i][j][k] == 'E'){
						xe = i;
						ye = j;
						ze = k;
						break;
					}
				}
			}
		}
		cout<<diChuyenTrongKhongGian(xs,ys,zs,xe,ye,ze)<<"\n";
	}
	return 0;
}

