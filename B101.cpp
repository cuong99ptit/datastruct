#include<bits/stdc++.h>
using namespace std;
int n,m,u;
int a[1001][1001];
int chuaxet[1001];
void dfs(int u){
	stack<int> q;
	q.push(u);
	chuaxet[u]=1;
	cout<<u<<" ";
	while(!q.empty()){
		int v=q.top();q.pop();
		
		for(int i=1;i<=n;i++){
			if(!chuaxet[i] && a[v][i]==1){
				cout<<i<<" ";
				chuaxet[i]=1;
				q.push(v);
				q.push(i);
				break;
			}
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		memset(a,0,sizeof(a));
		memset(chuaxet,0,sizeof(chuaxet));
		cin>>n>>m>>u;
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

