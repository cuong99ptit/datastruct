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
		for(int i=0;i<n;i++){
			int kt=1;
			for(int j=i+1;j<n;j++){
				if(a[j]>a[i]){
					kt=0;
					cout<<a[j]<<" ";
					break;
				}
			}
			if(kt==1) cout<<"-1 ";
		}
		cout<<endl;
	}

}

