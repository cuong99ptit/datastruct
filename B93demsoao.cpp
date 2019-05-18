#include<bits/stdc++.h>
using namespace std;
int a[1001][1001];
int chuaxet[1001][1001];
int n,m;
int X[8]={0,-1,-1,-1,0,1,1,1};
int Y[8]={-1,-1,0,1,1,1,0,-1};
struct td{
	int x,y;
};
vector<td> RES;
void solve(td u){
	queue<td> q;
	q.push(u);
	chuaxet[u.x][u.y]=1;
	while(!q.empty()){
		td v=q.front();q.pop();
		for(int i=0;i<8;i++){
			int l=X[i]+v.x;
			int r=Y[i]+v.y;
			if(!chuaxet[l][r] && l>=1 && l<=n && r>=1 && r<=m && a[l][r]==1){
				td NEW;
				NEW.x=l;NEW.y=r;
				q.push(NEW);


			}
		}
	}
}
int main(){
	
	cin>>n>>m;
	td res[10009];
	int Count=0;
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			char s;
			cin>>s;
			if(s=='W'){
				res[Count].x=i;
				res[Count].y=j;
				a[i][j]=1;
				Count++;
			}
		}
	}
	int dem=0;
	for(int i=0;i<Count;i++){
		if(!chuaxet[res[i].x][res[i].y]){
			solve(res[i]);
			dem++;
		}
	}
	cout<<dem;

}

