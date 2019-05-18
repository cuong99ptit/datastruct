#include<bits/stdc++.h>
using namespace std;
int a[1000][1000];
int chuaxet[1000];
int n,m,u;
void dfs(int u){
	chuaxet[u]=1;
	cout<<u<<" ";
	for(int i=1;i<=n+1;i++){
		if(!chuaxet[i] && a[u][i]==1){
			
			dfs(i);
			
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
		cin>>n>>m>>u;
		memset(a,0,sizeof(a));
		memset(chuaxet,0,sizeof(chuaxet));
		for(int i=1;i<=m;i++){
			int x,y;
			cin>>x>>y;
			a[x][y]=1;
			a[y][x]=1;
		}
	
		dfs(u);
		cout<<endl;
	}
}

