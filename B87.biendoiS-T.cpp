#include<bits/stdc++.h>
using namespace std;
bool chuaxet[100001];
long truoc[100001];
void solve(long a,long b){
	memset(chuaxet,0,sizeof(chuaxet));
	memset(truoc,0,sizeof(truoc));
	queue<long> q;
	q.push(a);
	chuaxet[a]=true;
	while(!q.empty()){
		long v=q.front();
		q.pop();
		int A=v-1;
		int B=v*2;
		if(A>0 &&!chuaxet[A]&& A<=10002){
			chuaxet[A]=true;
			truoc[A]=v;
			if(A==b) break;
			q.push(A);
		}
		if(B>0 && !chuaxet[B]&& B<=10002){
			chuaxet[B]=true;
			truoc[B]=v;
			if(B==b) break;
			q.push(B);
		}
		
	}
	int dem=1;
	int u=truoc[b];
	while(u!=a){
		dem++;
		u=truoc[u];
	}
	cout<<dem<<endl;
}
int main(){
	
	int t;
	cin>>t;
	long S,T;
	while(t--){
		cin>>S>>T;
		solve(S,T);
		
	}
	

}

