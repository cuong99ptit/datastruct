#include<bits/stdc++.h>
using namespace std;
int A[300][300];
struct toado{
	int d,c;
	int dem;
};
int chuaxet[300][300];
int X[4]={0,-1,0,1};
int Y[4]={-1,0,1,0};
void solve(toado a,toado b ){
	queue<toado> q;
	a.dem=0;
	q.push(a);
	chuaxet[a.d][a.c]=1;
	while(!q.empty()){
		toado v=q.front();
		q.pop();
		int u=v.d;
		int u1=v.c;
		for(int i=0;i<4;i++){
			int l=v.d+X[i];
			int r=v.c+Y[i];
			if(!chuaxet[l][r] && A[l][r]!=1){
				chuaxet[l][r]=1;
				if(l==b.d && r== b.c){
					cout<<v.dem+1<<endl;
					return;
				}
				toado NEW;
				NEW.d=l;
				NEW.c=r;
				NEW.dem=v.dem+1;
				q.push(NEW);
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			char x;
			cin>>x;
			if(x=='X') A[i][j]=1;
			else A[i][j]=0;
		}
	}
	int x,y,x1,y1;
	cin>>x>>y>>x1>>y1;
	toado a;
	a.d=x;a.c=y;
	toado b;
	b.d=x1;
	b.c=y1;
	solve(a,b);
	

}

