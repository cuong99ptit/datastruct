#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	long long h=1e9,c=1e9;
	for(int i=1;i<=n;i++){
		int x,y;
		cin>>x>>y;
		if(x<h) h=x;
		if(y<c) c=y;
	}
	long long res=0;
	res=h*c;
	cout<<res;

}

