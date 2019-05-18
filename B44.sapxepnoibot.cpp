#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int a[n+1];
	int dem=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		int kt=1;
		for(int j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				kt=0;
			}
		}
		if(kt==0){
			cout<<"Buoc "<<++dem<<": ";
			for(int h=0;h<n;h++){
				cout<<a[h]<<" ";
			}
			cout<<endl;
		}
	}

}

