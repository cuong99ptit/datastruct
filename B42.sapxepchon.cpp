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
	int dem=0;
	for(int i=0;i<n-1;i++){
		int Min=i;
		int kt=1;
		for(int j=i+1;j<n;j++){
			if(a[Min]>a[j]){
				Min=j;
				
			}
		}
		
		dem++;
		swap(a[Min],a[i]);
		cout<<"Buoc "<<dem<<": ";
		for(int h=0;h<n;h++){
			cout<<a[h]<<" ";
		}
		cout<<endl;
		
	}

}

