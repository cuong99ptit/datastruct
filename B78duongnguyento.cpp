#include<bits/stdc++.h>
using namespace std;
int chuaxet[10000];
int truoc[10000];
int kt(int x){
	if(x<2) return false;
	if(x>=2){
		for(int i=2;i*i<=x;i++){
			if(x%i==0) return false;
		}
	}
	return true;
}
int stringint(string s){
	stringstream v;
	v<<s;
	int res;
	v>>res;
	return res;
}
string intstring(int s){
	string res;
	stringstream v;
	v<<s;
	v>>res;
	return res;
}
void solve(int a,int b){
	
	queue<int> q;
	q.push(a);
	chuaxet[a]=1;
	while(!q.empty()){
		int v=q.front();q.pop();
		string v1=intstring(v);
		for(int i=0;i<4;i++){
			char k;
			if(i==0) k='1';
			else k='0'; 
			string h1=v1;
			for(char j=k;j<='9';j++){
				h1[i]=j;
				int res=stringint(h1);
				if(kt(res) && !chuaxet[res]){
					chuaxet[res]=1;
					truoc[res]=v;
					if(res==b) return;
					q.push(res);
					
				}
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
	string a,b;
	while(t--){
		cin>>a>>b;
		memset(chuaxet,0,sizeof(chuaxet));
		memset(truoc,0,sizeof(truoc));
		
		int dem=0;
		int l=stringint(b);
		int l1=stringint(a);
		
		if(l==l1) cout<<"0\n";
		else {
			solve(stringint(a),stringint(b));
			int u=truoc[l];
			while(u!=l1){
			
			u=truoc[u];
			dem++;
			}
			cout<<dem+1<<endl;
		}
	}

}

