#include<bits/stdc++.h>
using namespace std;
int R,C;
int X[4]={0,-1,0,1};
int Y[4]={-1,0,1,0};
int a[1001][1001];
int chuaxet[1001][1001];
struct td{
	int x,y;
};
int RES[1001][1001];
void solve(td u){
	
	
}
int main(){
	
	cin>>R>>C;
	for(int i=1;i<=R;i++){
		for(int j=1;j<=C;j++){
			cin>>a[i][j];
		}
	}
	queue<td> q;
	int Count=0;
	td res[R*C+1];
	for(int i=1;i<=R;i++){
		for(int j=1;j<=C;j++){
			if(a[i][j]==2){
				res[Count].x=i;
				res[Count].y=j;
				q.push(res[Count]);
				Count++;			
			}
		}
	}
	while(!q.empty()){
		td v=q.front();q.pop();
		for(int i=0;i<4;i++){
			int l=v.x+X[i];
			int r=v.y+Y[i];
			if(l>=1 && l<=R && r>=1 && r<=C && a[l][r]==1){
				a[l][r]++;
				
				td NEW;
				NEW.x=l;
				NEW.y=r;
				RES[l][r]=RES[v.x][v.y]+1;
				q.push(NEW);
			}
		}
	}
	for(int i=0;i<Count;i++){
		solve(res[i]);
	}
	int Max=0;
	int dem=0;
	for(int i=1;i<=R;i++){
		for(int j=1;j<=C;j++){
			if(a[i][j]==1){
				dem++;
				break;
			}
			if(RES[i][j]>Max) Max=RES[i][j];
		}
	}
	if(dem>0) cout<<"-1";
	else cout<<Max;	
	
	
}

