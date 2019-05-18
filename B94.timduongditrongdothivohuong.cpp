#include<bits/stdc++.h>
using namespace std;
int chuaxet[1000];
int n,m;
int a[1000][1000];
void solve(int s,int t){
	memset(chuaxet,0,sizeof(chuaxet));
	queue<int> q;
	q.push(s);
	chuaxet[s]=1;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(int i=1;i<=n;i++){
			if(a[v][i]==1 && !chuaxet[i]){
				chuaxet[i]=1;
				if(i==t){
					cout<<"YES\n";
					return;
				}
				q.push(i);
				
			}
		}
	}
	cout<<"NO\n";
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;

	while(t--){
		cin>>n>>m;
		memset(a,0,sizeof(a));
		for(int i=0;i<m;i++){
			int u,v;
			cin>>u>>v;
			a[u][v]=1;
			a[v][u]=1;
		}
		int q;
		cin>>q;
		while(q--){
			int h,k;
			cin>>h>>k;
			solve(h,k);
			
		}
		
	}

}

