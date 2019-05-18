#include<bits/stdc++.h>
using namespace std;

int binary(int a[],int l,int r,int k){
	int mid;
	while(l<=r){
		mid=(l+r)/2;
		if(a[mid]==k) return mid;
		if(k>a[mid]){
			l=mid+1;
			continue;
		}
		else{
			r=mid-1;
		}
	}
	return -1;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	int n,k;
	while(t--){
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int x=binary(a,0,n-1,k);
		if(x==-1) cout<<"NO\n";
		else cout<<x+1<<endl;;
	}

}

