#include<bits/stdc++.h>
using namespace std;
int a[501][501];
int chuaxet[501][501];
int n,m;
int X[8]={-1,-1,0,1,1,1,0,-1};
int Y[8]={0,-1,-1,-1,0,1,1,1};
struct td{
	int x,y;
};
void solve(td u){
	queue<td> q;
	chuaxet[u.x][u.y]=1;
	q.push(u);
	while(!q.empty()){
		td v=q.front();q.pop();
		for(int i=0;i<8;i++){
			int l=X[i]+v.x;
			int r=Y[i]+v.y;
			if(!chuaxet[l][r] && l>=1 && l<=n && r>=1 && r<=m && a[l][r]==1){
				chuaxet[l][r]=1;
				td NEW;
				NEW.x=l;NEW.y=r;
				q.push(NEW);
				
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	
	
	while(t--){
		cin>>n>>m;
		td res[n*m+1];
		int Count=0;
		memset(chuaxet,0,sizeof(chuaxet));
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
				if(a[i][j]==1)
				{
					
					res[Count].x=i;
					res[Count].y=j;
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
		cout<<dem<<endl;
	}
	

}

