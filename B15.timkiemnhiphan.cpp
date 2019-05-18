#include<bits/stdc++.h>
using namespace std;
int n,k;

int bnr(int a[],int l,int r){
	int mid;
	while(l<=r){
		mid=(r+l)/2;
		if(a[mid]==k) return mid;
		if(k>a[mid]){
			l=mid+1;
			continue;
		}
		else r=mid-1;
	}
	return -1;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;

	while(t--){
		int a[100001];
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int x=bnr(a,0,n-1);
		if(x!=-1) cout<<x+1<<endl;
		else cout<<"NO"<<endl;
	}
	

}

