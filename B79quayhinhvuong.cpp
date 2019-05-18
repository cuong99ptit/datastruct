#include<bits/stdc++.h>
using namespace std;
int chuaxet[1000000];
int truoc[1000000];
int mangint(vector<int> a){
	int res=0;
	for(int i=0;i<a.size();i++){
		res=res*10+a[i];
	}
	return res;
}
vector<int> intmang(int a){
	stack<int> b;
	vector<int> res;
	while(a){
		b.push(a%10);
		a/=10;
	}
	while(!b.empty()){
		int t=b.top();
		b.pop();
		res.push_back(t);
	}
	return res;
}
int xoaytrai(int a){
	vector<int> res=intmang(a);
	int tmp=res[0];
	res[0]=res[3];
	res[3]=res[4];
	res[4]=res[1];
	res[1]=tmp;
	int RES=mangint(res);
	return RES;
}
int xoayphai(int a){
	vector<int> res=intmang(a);
	int tmp=res[1];
	res[1]=res[4];
	res[4]=res[5];
	res[5]=res[2];
	res[2]=tmp;
	int RES=mangint(res);
	return RES;
}
void solve(int a,int b){
	queue<int> q;
	q.push(a);
	chuaxet[a]=1;
	while(!q.empty()){
		int v=q.front();q.pop();
		int h=xoaytrai(v);
		int h1=xoayphai(v);
		if(v==b) break;
		if(!chuaxet[h]){
			chuaxet[h]=1;
			truoc[h]=v;
			q.push(h);
		}
		if(!chuaxet[h1]){
			chuaxet[h1]=1;
			truoc[h1]=v;
			q.push(h1);
		}
	}
	int dem=0;
	int u=truoc[b];
	while(u!=a){
		dem++;
		u=truoc[u];
	}
	cout<<dem+1<<endl;;
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	vector<int> a,b;
	for(int i=0;i<6;i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	for(int i=0;i<6;i++){
		int x;
		cin>>x;
		b.push_back(x);
	}
	int l=mangint(a),l1=mangint(b);
	solve(l,l1);

}

