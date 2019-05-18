#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,k;
	cin>>n>>k;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	int i=n;
	int dem=0;
	while(i>0){
		if(k>=a[i]){
			int v=k/a[i];
			dem+=v;
			k=k-v*a[i];
			if(k==0) break;
		}
		i--;
	}
	cout<<dem;
	
}

