#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int q;
	cin>>q;
	int x;
	int y[q+1];
	for(int i=0;i<q;i++){
		cin>>y[i];
		
	}
	for(int i=0;i<q;i++){
		if(y[i]<a[0]) cout<<"0\n";
		else cout<<upper_bound(a,a+n,y[i])-a<<endl;
	}

}

