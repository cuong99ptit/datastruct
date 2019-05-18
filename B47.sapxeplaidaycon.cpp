#include<bits/stdc++.h>
using namespace std;
bool kt(int a[],int n){
	for(int i=0;i<n-1;i++){
		if(a[i]>a[i+1]) return false;
	}
	return true;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	int n;
	while(t--){
		cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int  b[n+1];
		for(int i=0;i<n;i++){
			b[i]=a[i];
		}
		sort(a,a+n);
		int dem=0;
		int d=0,c=0;
		for(int i=0;i<n;i++){
			if(a[i]==b[i]) d++;
			else break;
		}
		for(int i=n-1;i>=0;i--){
			if(a[i]==b[i]) c++;
			else break;
		}
		if(kt(b,n)) cout<<"YES\n";
		else cout<<n-(d+c)<<endl;
	}

}

