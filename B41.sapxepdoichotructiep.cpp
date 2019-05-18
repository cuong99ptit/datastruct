#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int dem=0;
	for(int i=1;i<n;i++){
		int kt=0;
		for(int j=i+1;j<=n;j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
				kt=1;
			
			}
		}
		if(kt==1){
			dem++;
			cout<<"Buoc "<<dem<<": ";
			for(int h=1;h<=n;h++){
				cout<<a[h]<<" ";
			}
			cout<<endl;
			
		}
	}

}

