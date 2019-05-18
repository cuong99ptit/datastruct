#include<bits/stdc++.h>
using namespace std;
int a[1009][1009];
int chuaxet[1009];
int n,m;
void bfs(int u){
	chuaxet[u]=1;
	queue<int> q;
	q.push(u);
	cout<<u<<" ";
	while(!q.empty()){
		int v=q.front();q.pop();
		for(int i=1;i<=n;i++){
			if(!chuaxet[i] && a[v][i]==1){
				chuaxet[i]=1;
				cout<<i<<" ";
				q.push(i);
			}
			
		}
	}
	cout<<endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		memset(chuaxet,0,sizeof(chuaxet));
		memset(a,0,sizeof(a));
		for(int i=1;i<=m;i++){
			int x,y;
			cin>>x>>y;
			a[x][y]=1;
			a[y][x]=1;
		}
	
		for(int i=1;i<=n;i++){
			vector<int> a;
			if(!chuaxet[i]){
				bfs(i);
			
			}
		}
	}

}

