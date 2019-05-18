#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int Min=1e9+7;
		for(int i=1;i<n;i++){
			if((a[i]-a[i-1])<Min) Min=a[i]-a[i-1];
		}
		int dem=0;
		for(int i=1;i<n;i++){
			if((a[i]-a[i-1])==Min) dem++;
		}
		cout<<Min<<" "<<dem<<endl;
	}

}

