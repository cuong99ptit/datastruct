#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	int m=1e9+7;
	cin>>n;
	priority_queue<int,vector<int>,greater<int> > q;
	int a[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i]; 
		q.push(a[i]);
	}
	long long res=0;
	while(!q.empty()){
		int x=q.top();
		q.pop();
		if(q.empty()) break;
		int y=q.top();
		q.pop();
		int sum=(x+y)%m;
		res=(res+sum)%m;
		q.push(sum);
	}
	cout<<res;
	

}

